/**
 *	Author: hyturing
 *	Created: 17 Jun 2022 23:10:57 IST
**/

#include <bits/stdc++.h>
using namespace std; 

#define ll long long
const int  MOD = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const ll INF = 1e18;

void solve() {

	// code here
	
	int n; cin >> n;
	vector<int> a(n+1);
	map<int,vector<int>> m;

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		m[a[i]].push_back(i);
	}

	int val = a[1], right = 1, left = 1, maxn = 1;

	for (auto x: m) {
		vector<int> t = x.second;
		int t_val = x.first;
		int sum = 1;
		int t_left = t[0];
		for (int i = 1; i < t.size(); i++) {
			sum++;
			sum -= t[i]-t[i-1]-1;

			if (sum > maxn) {
				maxn = sum;
				left = t_left;
				right = t[i];
				val = t_val;
			}

			if (sum < 1) {
				sum = 1;
				t_left = t[i];
			}
		}
	}

	cout << val << " " << left << " " << right << "\n";

	return;
}

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int tc = 1;
	cin >> tc;
	
	for (int i = 1; i <= tc; i++) {
		// cout << "Case #" << i << ": ";
		solve();
	}

	return 0;
}
