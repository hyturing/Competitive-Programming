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

bool good(int x, int w, int h, int n) {
    return (x/w) * (x/h) >= n;
}

void solve() {

    // code here
    
    int w, h, n; cin >> w >> h >> n;

    int l = 0;
    int r = 1;

    while (!good(r, w, h, n)) r *= 2;
    
    while (r-l > 1) {
        int mid = r - (r-l)/2;

        if (good(mid, w, h, n)) {
            r = mid;
        } else {
            l = mid;
        }
    } 

    cout << r << endl;

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
