/**
 *	Author: hyturing
 *	Created: 25 May 2022 13:54:55 IST
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
	
	int n, q;
	cin >> n >> q;

	vector<int> row(n+1, 0), col(n+1, 0);

	set<int> frow, fcol;

	for (int i = 1; i <= n; i++) {
		frow.insert(i);
		fcol.insert(i);
	}

	while (q--) {
		int tp;
		cin >> tp;

		if (tp == 1) {
			int x, y;
			cin >> x >> y;

			row[x]++, col[y]++;

			frow.erase(x);
			fcol.erase(y);
		}
		else if (tp == 2) {
			int x, y;
			cin >> x >> y;

			if (row[x] == 1) {
				frow.insert(x);
			}

			if (col[y] == 1) {
				fcol.insert(y);
			}
			
			row[x]--;
			col[y]--;
		}
		else {
			int x1, x2, y1, y2;
			cin >> x1 >> y1 >> x2 >> y2;

			if (*frow.lower_bound(x1) > x2 or *fcol.lower_bound(y1) > y2) {
				cout << "Yes\n";
			}
			else {
				cout << "No\n";
			}
			
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
