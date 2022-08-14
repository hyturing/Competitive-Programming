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
    int a[n];
    set<int> temp;
    for (auto &x: a) {
        cin >> x;
        if (x > 0) temp.insert(x);
    }

    vector<int> num;
    for (auto x: temp) num.push_back(x);
    sort(num.rbegin(), num.rend());

    set<int> s;
    for (int i = 0; i < n; i++) s.insert(i+1);

    int ans[n+1] = {0};
    
    for (auto x: num) {
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            int k = (i+1)/(a[i]+1)+1;
            auto it = lower_bound(s.begin(), s.end(), k);
            ans[i+1] = *it;
            s.erase(it);
        }
    }

}

    // for (int i = 0; i < n; i++) {
    //     if (a[i] == 1 and ans[i+1] == 0) {
    //         int val = (i+1)/2+1;
    //         auto it = lower_bound(s.begin(), s.end(), val);
    //         ans[i+1] = *it;
    //         s.erase(it);
    //     }
    // }


    for (int i = 0; i < n; i++) {
        if (a[i] == 0 and ans[i+1] == 0) {
            auto it = s.begin();
            ans[i+1] = *it;
            s.erase(it);
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << ans[i] << " ";
    }

    cout << "\n";
    
    // for (int i = 1; i <= n; i++) {
    //     cout << i << " ";
    // }

    // cout << "\n";

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

