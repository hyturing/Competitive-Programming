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
    char c; cin >> c;

    string s; cin >> s;

    vector<int> g;

    for (int i = 0; i < n; i++) {
    	if (s[i] == 'g') g.push_back(i);
    }

    int mx = 0;

    for (int i = 0; i < n; i++) {
    	if (s[i] == c and s[i] != 'g') {
    		auto it = lower_bound(g.begin(), g.end(), i);


    		if (it == g.end()) {
    			mx = max(g[0]+n-i, mx);
    			continue;
    		}

    		// int k = it-g.begin();

    		mx = max(mx, *it-i);
    	}
    }

    cout << mx << endl;
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
