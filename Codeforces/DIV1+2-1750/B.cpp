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
    string s; cin >> s;

    int x = 0, y = 0;

    for (auto m: s) {
        if (m == '1') x++;
        else y++;
    }

    int ans = x*y;

    int cnt = 0;
    bool ok = false;

    for (int i = 0; i < n; i++) {
        if (ok) {
            if (s[i] == '1') {
                cnt++;
            }
            else {
                ans = max(ans, cnt*cnt);
                cnt = 0;
                ok = false;
            }
        }
        else {
            if (s[i] == '1') {
                cnt++;
                ok = true;
            }
        }
    }


    if (cnt > 0) {
        ans = max(ans, cnt*cnt);
        cnt = 0;
    }

    ok = false;

    for (int i = 0; i < n; i++) {
        if (ok) {
            if (s[i] == '0') {
                cnt++;
            }
            else {
                ans = max(ans, cnt*cnt);
                cnt = 0;
                ok = false;
            }
        }
        else {
            if (s[i] == '0') {
                cnt++;
                ok = true;
            }
        }
    }

    if (cnt > 0) {
        ans = max(ans, cnt*cnt);
        cnt = 0;
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
