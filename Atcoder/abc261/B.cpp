/**
 *    Author: hyturing
 *    Created: 
**/

#include <bits/stdc++.h>
using namespace std; 

#define int long long
#define sz(x) ((int)(x).size())
#define all(x) x.begin(),x.end()
#define endl "\n"
#define pb push_back

const int  MOD = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const long long INF = 1e18;

void solve() {

    // code here
    
	int n; cin >> n;
	char a[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) cin >> a[i][j];
	}   

	bool ok = true;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j) continue;
			if (a[i][j] == 'W') {
				if (a[j][i] != 'L') {
					ok = false;
					break;
				}
			}
			if (a[i][j] == 'L') {
				if (a[j][i] != 'W') {
					ok = false;
					break;
				}
			}
			if (a[i][j] == 'D') {
				if (a[j][i] != 'D') {
					ok = false;
					break;
				}
			}
		}
		if (!ok) break;
	} 

	if (ok) {
		cout << "correct" << endl;
	}
	else {
		cout << "incorrect" << endl;
	}

    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    // cin >> tc;
    
    for (int i = 1; i <= tc; i++) {
        // cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}

/*-------------------------------------------------------------------------------------------------------*/

