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
    
    int n, x, y, z; cin >> n >> x >> y >> z;

   	int a[n], b[n];
   	for (auto &x: a) cin >> x;
   	for (auto &x: b) cin >> x;

    vector<array<int,3>> v1;
    vector<int> ans;

    for (int i = 0; i < n; i++) {
        v1.pb({a[i], -(i+1), b[i]});
    }

    sort(v1.rbegin(), v1.rend());


    // for (auto x: v1) cout << x[0] << " " << x[1] << " " << x[2] << endl;

    vector<array<int,3>> v2;

    for (auto k: v1) {
        if (x > 0) {
            ans.push_back(k[1]);
            x--;
        }
        else {
            v2.push_back({k[2], k[1], k[0]});
        }
    }

    vector<array<int,3>> v3;

    sort(v2.rbegin(), v2.rend());

    for (auto k: v2) {
        if (y > 0) {
            ans.push_back(k[1]);
            y--;
        }
        else {
            v3.push_back({k[0]+k[2], k[1], 0});
        }
    }

    sort(v3.rbegin(), v3.rend());

    // for (auto x: v3) cout << x[0] << " " << x[1] << " " << x[2] << endl;


   	for (auto k: v3) {
        if (z > 0) {
            ans.push_back(k[1]);
            z--;
        }
    }

    for (auto &x: ans) x = -x;

    sort(all(ans));
    for (auto x: ans) cout << x << endl;

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

