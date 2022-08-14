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

void solve() {

    // code here
    
    int n; cin >> n;

    set<int> s1, s2;

    vector<pair<int,int>> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < n; i++) {
        if (a[i].first == a[i].second) continue;
        if (s1.find(a[i].first) == s1.end() and s1.find(a[i].second) == s1.end()) {
            s1.insert(a[i].first);
            s1.insert(a[i].second);
        }
        else if (s2.find(a[i].first) == s2.end() and s2.find(a[i].second) == s2.end()) {
            s2.insert(a[i].first);
            s2.insert(a[i].second);
        }
    }

    int k = s1.size()+s2.size();

    // cout << s1.size() << " " << s2.size() << endl;

    if (k == (2*n)) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
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

