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

    vector<int> a(n);

    for (auto &x: a) cin >> x;

    vector<int> t;

    bool ok = false;

    int sum = 0;
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        if (ok) {
            if (s[i] == '0') {
                sort(t.rbegin(), t.rend());

                for (int j = 0; j < sz(t)-cnt; j++) sum += t[j];
                t.clear();
                cnt = 0;

                ok = false;
                i--;
            }
            else {
                t.push_back(a[i]);
            }
        }
        else {
            if (s[i] == '1') {
                ok = true;
                t.push_back(a[i]);
            }
            else {
                if (i < n-1 and s[i+1] == '1') {
                    ok = true;
                    cnt++;
                    t.push_back(a[i]);
                }
            }
        }
    }

    if (ok) {
        sort(t.rbegin(), t.rend());
        for (int i = 0; i < sz(t)-cnt; i++) sum += t[i];
    }

    cout << sum << endl;

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
