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
    map<int,int> m;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        m[x]++;
    }

    while (sz(m) != 1) {
        map<int,int> t;

        auto j = m.begin();
        auto i = j++;

        while (j != m.end()) {
            if (i->second > 1) {
                t[0] += i->second-1;
            }            
            t[j->first-i->first]++;
            i++; j++;
        }

        if (i->second > 1) t[0] += i->second-1;

        m = t;
    }

    if (m.begin()->second > 1) {
        cout << 0 << "\n";
    }
    else {
        cout << m.begin()->first << "\n";
    }

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

