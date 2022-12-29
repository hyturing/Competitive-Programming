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
    
    int n, x; cin >> n >> x;

    vector<int> a(n);
    for (auto &x: a) cin >> x;

    vector<int> f(x+1, 0LL);

    for (int i = 0; i < n; i++) {
        f[a[i]]++;
    }

    for (int i = 1; i < x; i++) {
        if (f[i]%(i+1) == 0) {
            f[i+1] += f[i]/(i+1);
        }
        else {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";

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
