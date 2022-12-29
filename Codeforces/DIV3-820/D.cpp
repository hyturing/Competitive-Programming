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
    
    int n; cin >> n;
    vector<int> x(n), y(n);

    for (auto &c: x) cin >> c;
    for (auto &c: y) cin >> c;

    vector<int> cur;

    for (int i = 0; i < n; i++) {
        cur.push_back(y[i]-x[i]);
    }

    vector<int> pos, neg;

    for (auto x: cur) {
        if (x >= 0LL) pos.push_back(x);
        else neg.push_back(x);
    
    }


    int ps = pos.size();
    int ns = neg.size();
    sort(pos.begin(), pos.end());
    sort(neg.rbegin(), neg.rend());
    
    int i = 0, j = 0;

    int cnt = 0, r = 0;

    // for (auto x: pos) cout << x << " "; cout << endl;
    // for (auto x: neg) cout << x << " "; cout << endl;


    while(i < ps and j < ns) {
        if (pos[i]+neg[j] >= 0LL) {
            cnt++;
            i++;
            j++;
        }
        else {
            i++;
            r++;
        }
    }

    int siz = r+sz(pos)-i;

    cout << cnt+(siz/2) << endl;

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