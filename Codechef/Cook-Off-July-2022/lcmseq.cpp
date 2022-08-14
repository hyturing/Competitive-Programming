/**
 *    Author: hyturing
 *    Created: 03 Jul 2022 21:18:47 IST
**/

#include <bits/stdc++.h>
using namespace std; 

#define sz(x) ((int)(x).size())

const int  MOD = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const long long INF = 1e18;
#define int long long

int binpow(int a, int b, int MOD) {
    a %= MOD;
    int res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return res;
}


void solve() {

    // code here
    
    int n; cin >> n;

    map<int, int> m;

    int even = 0;

    for (int i = 0; i < n; i++) {
    	int x; cin >> x;
        if (x%2 == 0) {
            even++;
            continue;
        }
    	m[x]++;
    }

    int ans = (binpow(2LL, even, MOD)-even-1LL)%MOD;

    for (auto x: m) {
    	int a = x.second;

    	if (a > 1) {
    		ans += (binpow(2LL, a, MOD)-a-1LL)%MOD;
    	}
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

