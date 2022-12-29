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

int mx(unordered_map<char,int>& mp) {
    int t = 0;

    for (auto x: mp) t = max(t, x.second);

    return t;
}

void solve() {

    // code here
    
    int n; cin >> n;
    string s; cin >> s;

    int ans = n;

    for (int i = 2; i <= 100; i++) {
        if (i > n) break;
        int a = 0, b = a+i-1;
        unordered_map<char,int> mp;
        for (int j = a; j <= b; j++) {
            mp[s[j]]++;
        }
        int len = b-a+1;
        
        while (b < n) {
            if (mp.size() >= mx(mp)) ans++;
            mp[s[a]]--;
            if (mp[s[a]] == 0) mp.erase(s[a]);
            a++;

            b++;
            if (b < n) mp[s[b]]++;
        }
    }

    cout << ans << endl;

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
