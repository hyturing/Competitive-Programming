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
    
    int n, m; cin >> n >> m;

    for (int a = 1; a <= n; a++) {
    	for (int b = 1; b <= m; b++) {
    		bool ok = true;
    		for (int i = 1; i <= n; i++) {
    			for (int j = 1; j <= m; j++) {
    				if (a == i or b == j) continue;
    				int dis = abs(a-i)+abs(b-j);

    				if (dis == 3) ok = false;
    			}
    		}

    		if (ok) {
    			cout << a << " " << b << endl;
    			return;
    		}
    	}
    }


    cout << 1 << " " << 1 << endl;
    

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
