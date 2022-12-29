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
    vector<int> a(n), b(m);

    string a, b;
    cin >> a >> b;

    bool ok = true;

    if (m > n) {
        cout << "NO\n";
        return;
    }   

    int j = m-1, i = n-1;

    while (j > 0) {
        if (a[i] != b[j]) ok = false;
        i--, j--;
    }

    bool ok2 = false;

    for (int k = 0; k <= i; k++) if (a[k] == b[0]) ok2 = true;

    if (!ok2) ok = false;

    if (ok) cout << "YES\n";
    else cout << "NO\n";

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
