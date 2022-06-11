/**
 *	Author: hyturing
 *	Created: 05 Jun 2022 05:41:33 IST
**/

#include <bits/stdc++.h>
using namespace std; 

#define int long long
const int  MOD = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const int INF = 1e18;

void solve() {

	// code here
	
	int n;
	cin >> n;

	int a[n];
	for (auto &x: a) {
		cin >> x;
	}

	vector<int> v = {1};

	int cnt = 1;
	for (int i = 2; i < n; i++) {
		if (a[i] > a[i-1]) {
			cnt++;
		}
		else {
			v.push_back(cnt);
			cnt = 1;
		}
	}

	v.push_back(cnt);

	int curr = 1, next = 0;
	cnt = 0;

	vector<int> ans;

	for (int i = 1; i < v.size(); i++) {
		if (cnt < curr) {
			next += v[i];
			cnt++;
		}
		else {
			ans.push_back(next);
			curr = next;
			cnt = 0;
			next = 0;
			i--;
		}
	}

	if (next > 0) ans.push_back(next);

	cout << ans.size() << "\n";
	return;
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int tc = 1;
	cin >> tc;
	
	for (int i = 1; i <= tc; i++) {
		// cout << "Case #" << i << ": ";
		solve();
	}

	return 0;
}
