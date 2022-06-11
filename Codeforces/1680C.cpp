/**
 *	Author: hyturing
 *	Created: 30 May 2022 22:46:06 IST
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
	
	string s;
	cin >> s;

	int n = s.size();

	vector<int> pos, c0(n+1, 0), c1(n+1, 0);
	for (int i = 1; i <= n; i++) {
		if (s[i-1] == '0') pos.push_back(i);
		c0[i] += c0[i-1]+(s[i-1] == '0' ? 1 : 0);
		c1[i] += c1[i-1]+(s[i-1] == '1' ? 1 : 0);
	}

	int lo = 0;
	int hi = n;
	int mid;

	while (lo < hi) {
		mid = (lo+hi)/2;

		int x = mid;
		bool ok = false;

		for (int i = 0; i < pos.size() - x; i++) {
			int a = pos[i];
			int b = pos[i+x-1];

			int k = max(mid, c1[n]-c1[b]+c1[a-1]);
			if (k == mid) {
				ok = true;
				break;
			}
		}

		if (ok) {
			hi = mid;
		}
		else {
			lo = mid+1;
		}
	}

	cout << lo << "\n";
	
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
