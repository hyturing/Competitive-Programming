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
    
	int n, c; cin >> n >> c;
	int t[n], a[n], x[n];
	for (int i = 0; i < n; i++) {
		cin >> t[i] >> a[i];
		if (i == 0) x[i] = a[i];
		else {
			if (t[i] == 1) {
				x[i] = x[i-1]&a[i];
			}
			else if (t[i] == 2) {
				x[i] = x[i-1]|a[i];
			}
			else {
				x[i] = x[i-1]^a[i];
			}
		}
	}   

	for (int i = 0; i < n; i++) {
		// cout << "t " << x[i] << endl;
		if (t[0] == 1) {
			c = c&x[i];
		}
		else if (t[0] == 2) {
			c = c|x[i];
		}
		else {
			c = c^x[i];
		}

		cout << c << endl;
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

