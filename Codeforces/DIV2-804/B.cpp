/**
 *    Author: hyturing
 *    Created: 
**/

#include <bits/stdc++.h>
using namespace std; 

#define sz(x) ((int)(x).size())

const int  MOD = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const long long INF = 1e18;

void solve() {

    // code here
    
    int n, m; cin >> n >> m;

    int a[n][m];

    for (int i = 0; i < n; i++) {
    	for (int j = 0; j < m; j++) {
    		a[i][j] = 0;
    	}
    }

    bool ok = true;
    int v = 0;

    a[0][0] = 1;
    for (int i = 1; i < n; i++) {
    	if (ok) {
    		a[i][0] = 0;
    		v++;
    		if (v == 2) {
    			ok = false;
    			v = 0;
    		}
    	}
    	else {
    		a[i][0] = 1;
    		v++;
    		if (v == 2) {
    			ok = true;
    			v = 0;
    		}
    	}
    }

    for (int i = 0; i < n; i++) {
        bool ok;
        int cnt = 0;
        if (a[i][0] == 1) ok = false;
        else ok = true;
        for (int j = 1; j < m; j++) {
            if (ok) {
            a[i][j] = 1;
            cnt++;
            if (cnt == 2) {
                ok = false;
                cnt = 0;
            }
        }
        else {
            a[i][j] = 0;
            cnt++;
            if (cnt == 2) {
                ok = true;
                cnt = 0;
            }
        }
        }
    }

    for (int i = 0; i < n; i++) {
    	for (int j = 0; j < m; j++) {
    		cout << a[i][j] << " ";
    	}
    	cout << "\n";
    }

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

