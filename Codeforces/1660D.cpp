/**
 *	Author: hyturing
 *	Created: 07 Apr 2022 00:41:55 IST
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
	for (auto &x: a) cin >> x;

	vector<array<int,4>> v;
	
	int x = 0, y = 0, prod = 0, mul = 1;

	for (int i = 0; i < n; i++) {
		if (a[i] == 0) {

			v.push_back({x,y-1,prod, mul});

			prod = 0;
			mul = 1;
			while(a[i] == 0 and i < n) i++;
			y = x = i;
			i--;

			continue;
		}

		if (abs(a[i]) == 2) prod++;
		if (a[i] < 0) mul *= -1;
		y++;
	}

	v.push_back({x,y-1,prod, mul});

	int mx = 0, i = 0, j = 0;

	for (auto m: v) {
		if (m[2] > mx and m[3] > 0) {
			mx = m[2];
			i = m[0];
			j = m[1];
			continue;
		}

		if (m[3] < 0) {
			int pre = 0, suf = 0, it1 = m[0], it2 = m[1];

			if (a[m[0]] == 2 or a[m[0]] == -2) pre++;
			if (a[m[1]] == 2 or a[m[1]] == -2) suf++;


			while (a[it1] > 0) {
				it1++;
				pre += (abs(a[it1]) == 2 ? 1: 0);
			}

			while (a[it2] > 0) {
				it2--;
				suf += (abs(a[it2]) == 2 ? 1: 0);
			}

			// cout << "debug " << pre << " " << suf << " " << m[2] << endl;

			if (pre > suf) {
				if (abs(m[2])-abs(suf) > mx) {
					j = it2-1;
					i = m[0];
					mx = abs(m[2])-abs(suf);
				}
			}
			else {
				if (abs(m[2])-abs(pre) > mx) {
					i = it1+1;
					j = m[1];
					mx = abs(m[2])-abs(pre);
				}	
			}
		}
	}

	// for (auto x: v) cout << x[0] << " " << x[1] << " " << x[2] << "\n";

	if (mx == 0) {

		int k = -1;

		for (int x = 0; x < n; x++) {
			if (a[x] > mx) {
				k = x;
				mx = a[x];
			}
		}

		if (mx != 0) {
			cout << k << " " << n-k-1 << "\n";
			return;
		}

		cout << n << " " << 0 << "\n";
		return;
	}

	cout << i << " " << n-j-1 << "\n"; 

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
