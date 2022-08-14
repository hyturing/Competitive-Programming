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
    
    int n, H, M; cin >> n >> H >> M;
    int ans = 1440;

    for (int i = 0; i < n; i++) {
        int h, m; cin >> h >> m;

        int x = h*60+m;

        int res = x-H*60-M;

        if (res < 0) res += 1440;

        ans = min(ans, res);
    }

    cout << ans/60 << " " << ans%60 << endl;

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