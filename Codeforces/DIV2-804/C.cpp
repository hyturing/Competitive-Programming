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

int f[100000+5];

void fact() {
    f[0] = 1;

    for (int i = 1; i <= 100000; i++) {
        f[i] = (i*f[i-1])%MOD;
    }

    return;
}

int nCr(int n, int r){
    int p = 1, k = 1;
 
    if (n - r < r)
        r = n - r;
 
    if (r != 0) {
        while (r) {
            p *= n;
            k *= r;
 
            int m = __gcd(p, k);
 
            p /= m;
            k /= m;
 
            n--;
            r--;
        }
 
    }
 
    else
        p = 1;
 
    return p%MOD;
}

void solve() {

    // code here
    
    int n; cin >> n;
    int a[n];

    int one, zero, mex;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 0) zero = i;
        if (a[i] == 1) one = i;
    }

    if ((zero == 0 and one == n-1) or (zero == n-1 and one == 0)) {
        cout << f[n-2] << "\n";
        return;
    }

    if (n < 4) {
        cout << 1 << "\n";
        return;
    }

    vector<int> ok(n, 0);

    for (int i = min(one, zero); i <= max(one, zero); i++) {
        ok[a[i]] = 1;
    }

    for (int i = 0; i < n; i++) {
        if (ok[i] == 0) {
            mex = i;
            break;
        }
    }

    int r = 0;

    for (int i = min(one, zero); i <= max(one, zero); i++) {
        if (a[i] < mex) r++;
    }

    r -= 2;

    int nn = max(zero, one) - min(zero, one) - 1;

    int ans = nCr(nn, r);

    ans = (ans*f[r])%MOD;

    int k = n-3-r;

    // cout << k << " " << r << " " << mex << " ";

    ans = (ans*f[k])%MOD;

    cout << ans << "\n";

    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    fact();
    int tc = 1;
    cin >> tc;
    
    for (int i = 1; i <= tc; i++) {
        // cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}

