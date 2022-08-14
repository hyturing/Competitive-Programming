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
#define int long long

void solve() {

    // code here
    
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for (auto &x: a) cin >> x;

    sort(a.begin(), a.end());

    if (k > a[n-1]) {
        cout << 0 << "\n";
        return;
    }

    set<int> s;

    for (int i = 0; i < n; i++) {
        int r = a[i];

        for (int j = 1; j <= k; j++) {
            if (j > r) break;
            if (r/j <= a[0]) s.insert(r/j);
        }
    }

    int ans = INF;

    for (auto x: s) {
        vector<int> b = a;
        for (int i = 0; i < n; i++) {
            int t = b[i]/x;
            b[i] /= min(t, k);
        }
    
        sort(b.begin(), b.end());

        ans = min(b[n-1]-b[0], ans);
    }
    
    cout << ans << "\n";

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

