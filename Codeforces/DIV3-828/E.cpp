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
    
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    vector<int> f1, f2;

    for (int i = 1; i*i <= a; i++) {
        if (a%i == 0) {
            f1.push_back(i);
            if (a/i == i) continue;
            f1.push_back(a/i);
        }
    }

    for (int i = 1; i*i <= b; i++) {
        if (b%i == 0) {
            f2.push_back(i);
            if (b/i == i) continue;
            f2.push_back(b/i);
        }
    }

    int xx = -1, yy = -1;

    for (auto x: f1) {
        for (auto y: f2) {
            int fa = x*y;
            int fb = (a*b)/fa;

            if (c - c%fa > a and d - d%fb > b) {
                xx = c-c%fa;
                yy = d-d%fb;
            } 

            if (d - d%fa  > b and c - c%fb > a) {
                yy = d-d%fa;
                xx = c-c%fb;
            }
        }
    }

    cout << xx << " " << yy << endl;

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
