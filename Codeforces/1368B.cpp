/**
 *	Author: hyturing
 *	Created: 29 Mar 2022 21:34:06 IST
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
	
	int k;
	cin >> k;

	int a = 2, b = 1, x = -1, y = -1;

	if (k == 1) {
		cout << "codeforces";
		return;
	}

	while (true) {
		int p1 = 1;
		for (int i = 1; i <= 10; i++) {
			p1 *= a;

			int p2 = 1;
			for (int j = 1; j <= 10-i; j++) {
				p2 *= b;
			}

			if (p1*p2 >= k) {
				x = a, y = i;
				break;
			}
		}

		if (x != -1 & y != -1) break;
		a++, b++;
	}

	vector<int> v(10+1, 1);

	for (int i = 1; i <= y; i++) v[i] = x;
	for (int i = y+1; i <= 10; i++) v[i] = x-1;
		
	string s = "codeforces";

	for (int i = 1; i <= 10; i++) {
		for (int j = 0; j < v[i]; j++) {
			cout << s[i-1];
		}
	}


	return;
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int tc = 1;
	// cin >> tc;
	
	for (int i = 1; i <= tc; i++) {
		// cout << "Case #" << i << ": ";
		solve();
	}

	return 0;
}
