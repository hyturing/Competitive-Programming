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

    map<char, char> m;

    set<char> pq;

    char c = 'a';

    for (int i = 0; i < 26; i++) {
        pq.insert(c); c++;
    }

    string ans = "";

    set<char> ok;

    for (int i = 0; i < n; i++) {
        if (m.find(s[i]) == m.end()) {

            auto it = pq.begin();

            char k = *it;

            if (k == s[i]) {
                it++;
                k = *it;
            }

            
            if (m.find(k) != m.end() and m.size() != 25) {
                int t = k;

                while (m.find(t) != m.end()) {
                    if (m[t] == s[i]) {
                        it++;
                        k = *it;
                        break;
                    }
                    else {
                        t = m[t];
                    }
                }
            }

            pq.erase(it);

            // for (auto it = pq.begin(); it != pq.end(); it++) cout << *it << " "; cout << endl;

            ok.insert(s[i]);

            m[s[i]] = k;

            ans.push_back(k);
        }
        else {
            ans.push_back(m[s[i]]);
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