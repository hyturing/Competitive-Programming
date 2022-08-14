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
    
    int n; cin >> n;
    vector<int> a(n);
    for (auto &x: a) cin >> x;

    int m; cin >> m;
    vector<int> b(m);
    for (auto &x: b) cin >> x;

    int k; cin >> k;

    vector<int> prea(n+1, 0), preb(m+1, 0);

    for (int i = 1; i <= n; i++) {
        prea[i] += prea[i-1]+a[i-1];
    }

    for (int i = 1; i <= m; i++) {
        preb[i] += preb[i-1]+b[i-1];
    }

    int rem = n+m-k;
    int minn = INF;

    for (int i = 0; i <= rem; i++) {

        int f = i, s = rem-i;
        int amin = INF, bmin = INF;

        if (f > 0) {
            for (int j = f; j <= n; j++) {
                if (amin > prea[j]-prea[j-f]) {
                    amin = prea[j]-prea[j-f];
                }
            }
        }
        else {
            amin = 0;
        }

        if (s > 0) {
            for (int j = s; j <= m; j++) {
                if (bmin > preb[j]-preb[j-s]) {
                    bmin = preb[j]-preb[j-s];
                }
            }
        }
        else {
            bmin = 0;
        }


        if (minn > amin+bmin) minn = amin+bmin;
    }

    // cout << minn << endl;

    cout << prea[n]+preb[m]-minn << endl;

    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    cin >> tc;
    
    for (int i = 1; i <= tc; i++) {
        cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}

