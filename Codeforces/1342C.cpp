/**
 *	Author: hyturing
 *	Created: 05 Jun 2022 06:52:59 IST
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
	
	int a, b, q;
	cin >> a >> b >> q;

	if (a == b) {
		while (q--) {
			cout << 0 << " ";
		}
		cout << "\n";
		return;
	}

	if (a > b) {
		// x mod a = x

		while (q--) {
			int l, r;
			cin >> l >> r;

			int total = r-l+1;
			int rem;

			if (a < l) rem = 0;
			else if ( a > r) rem = r-l+1;
			else {
				rem = a - l + 1;
			}

			cout << total - rem << " ";
		}

		cout << "\n";
		return;
	}
	

	if (b > a) {
		// x mod b = x

		while (q--) {
			int l, r;
			cin >> l >> r;

			int total = r-l+1;
			int rem = 0;

 			if (b > r) rem = b-r;
			for (int i = 0; i < b; i++) {
				int temp = i+b;

				while (true) {
					if (temp >= l and temp <= r) {
						if (temp%a == 0) rem++;
					}
					temp += b;
					if (temp > r) break;
				}
			}

			cout << total - rem << " ";
		}

		cout << "\n";
		return;
	}
	else {
		while (q--) {
			int l, r;
			cin >> l >> r;

			int total = r-l+1;
			int rem = 0;

			int val = l+(b - l%b);

			for (int i = val; i <= r; i += val) {
				if ((i - i%a)%b == 0) rem++;
			}

			cout << total - rem << " ";
		}

		cout << "\n";
		return;
	}

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
