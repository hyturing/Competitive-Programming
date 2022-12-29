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
    
    int a, b; cin >> a >> b;

    int val = __gcd(a,b);

    if (val == 1 and b > 1) {
        cout << "NO\n";
        return;
    }

    while (__gcd(b,val) > 1) {
        b /= __gcd(b,val);
    }

    if (b == 1) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
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
