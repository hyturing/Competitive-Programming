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

double predicate(double val, vector<double> &a, vector<double> &t) {
    double mx = 0;

    for (int i = 0; i < sz(a); i++) {
        mx = max(mx, abs(a[i]-val)+t[i]);
    }

    return mx;
}

void solve() {

    // code here
    
    int n; cin >> n;

    vector<double> a(n), t(n);

    for (auto &x: a) cin >> x;
    for (auto &x: t) cin >> x;

    double eps = 0.000001;
    double lo = 0, hi = 10e9;

    while (hi-lo > eps) {
        double mid = (lo+hi)/2;

        if (predicate(mid-eps, a, t) <= predicate(mid, a, t) and predicate(mid+eps, a, t) >= predicate(mid, a, t)) {
            hi = mid;
        }
        else {
            lo = mid;
        }
    }


	cout << fixed << setprecision(6) << lo << endl;

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
