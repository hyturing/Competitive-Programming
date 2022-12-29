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

    int x = 3;

    for (int i = 1; i <= n; i++) {
    	if (i >= 3) {
    		for (int j = 0; j < i; j++) {
    			if (j == 0) cout << 1 << " ";
    			else if (j == i-1) cout << 1 << " ";
    			else cout << 0 << " ";
    		}
    	}
    	else {
    		for (int j = 0; j < i; j++) cout << 1 << " ";
    	}

        cout << endl;
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

/*-------------------------------------------------------------------------------------------------------*/
