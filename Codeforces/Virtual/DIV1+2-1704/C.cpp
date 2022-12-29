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
    vector<int> a(m);

    for (auto &x: a) cin >> x;

    sort(all(a));

    vector<int> v;

    for (int i = 0; i < m; i++) {
        int k = a[(i+1)%m] - a[i];
        if (k <= 0) k += n;
        v.pb(k-1);
    }

    sort(v.rbegin(), v.rend());

    int ans = 0;

    for (int i = 0; i < sz(v); i++) {
       int num = v[i] - 4*i;

       if (num >= 1) {
            ans += max(1LL, num-1LL);
       }
    }

    cout << n-ans << endl;

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
