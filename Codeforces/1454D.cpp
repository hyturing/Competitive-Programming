/**
 *	Author: hyturing
 *	Created: 31 Mar 2022 13:53:14 IST
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

	vector<int> f;

	for (int i = 2; i*i <= n; i++) {
		if (n%i == 0) f.push_back(i), f.push_back(n/i);
	}

	f.push_back(n);

	sort(f.begin(), f.end());

	vector<int> fact;
	int k = n;
	for (auto x: f) {
		while (k%x == 0) {
			fact.push_back(x);
			k /= x;
		}
	}

	map<int,int> m;

	for (auto x: fact) m[x]++;

	int mx = -1, mxN = -1;

	for (auto x: m) {
		if (x.second > mx) mxN = x.first, mx = x.second; 
	}

	vector<int> ans;

	int prod = mxN;

	for (int i = 0; i < mx-1; i++) ans.push_back(mxN);

	for (auto x: fact) {
		if (x != mxN) prod *= x;
	}

	ans.push_back(prod);

	cout << ans.size() << "\n";
	for (auto x: ans) cout << x << " ";
	cout << "\n";

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
