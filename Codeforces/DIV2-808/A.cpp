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
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    bool ok = true;

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            if (a[i] == 1) {
                break;
            }
            continue;
        }

        if (a[i]%a[0] != 0) {
            ok = false;
            break;
        }
    }

    cout << (ok ? "YES\n" : "NO\n");

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

