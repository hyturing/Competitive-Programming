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
    
    string s; cin >> s;
    int n = s.size();

    vector<int> v;

    for (auto x: s) {
    	v.push_back((int)(x-'a')+1);
    }

    if (v[0] >= v[n-1]) {
        int ans = v[0]-v[n-1];
        int a = v[0], b = v[n-1];
        map<int,vector<int>, greater<int>> m;

        vector<int> arr;

        for (int i = 0; i < n; i++) {
            m[v[i]].push_back(i);
        }

        for (auto x: m) {
            if (x.first <= a and x.first >= b) {
                for (auto y: x.second) arr.push_back(y);
            } 
        }

        cout << ans << " " << arr.size() << endl;
        for (auto x: arr) cout << x+1 << " "; cout << endl;
    }
    else {
        int ans = v[n-1]-v[0];
        int a = v[0], b = v[n-1];
        map<int,vector<int>> m;

        vector<int> arr;

        for (int i = 0; i < n; i++) {
            m[v[i]].push_back(i);
        }

        for (auto x: m) {
            if (x.first >= a and x.first <= b) {
                for (auto y: x.second) arr.push_back(y);
            } 
        }

        cout << ans << " " << arr.size() << endl;
        for (auto x: arr) cout << x+1 << " "; cout << endl;
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

/*-------------------------------------------------------------------------------------------------------*/
