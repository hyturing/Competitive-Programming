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
    
    int n; cin >> n;
    vector<bool> ok(n+1, false);

    int k = 1, d = 2;

    vector<int> ans;
   
    while (k <= n) {
    	if (ok[k]) {
            k++;
            continue;
        }
        int r = k;

        while (r <= n) {
            ans.push_back(r);
            ok[r] = true;
            r *= 2;
        }
        k++;
    }

    cout << d << "\n";

    for (auto x: ans) cout << x << " "; cout << "\n";

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

