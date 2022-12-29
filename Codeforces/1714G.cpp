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

vector<vector<int>> adj;
map<pair<int,int>, int> a, b;
vector<int> ans;
vector<int> st;
void dfs(int v, int sum) {

    for (auto u: adj[v]) {
        if (st.size() == 0) {
            st.push_back(b[{v,u}]);
        }
        else {
            st.push_back(st[st.size()-1]+b[{v,u}]);
        }

        sum += a[{v,u}];

        // cout << endl << sum << endl;
        // for (auto x: st) cout << x << " "; cout << endl;

        if (st[0] > sum) ans[u] = 0;
        else {
            int l = 0, r = st.size()-1;

            while (l <= r) {
                int mid = (l+r)/2;

                if (st[mid] <= sum) {
                    ans[u] = mid+1;
                    l = mid+1;
                }
                else {
                    r = mid-1;
                }
            }
        }

        // cout << "ans " << u << " " << ans[u] << endl;

        dfs(u, sum);

        sum -= a[{v,u}];
        st.pop_back();
    }

    return;
}

void solve() {

    // code here
    
    int n; cin >> n;

    adj = vector<vector<int>>(n+1);
    ans = vector<int>(n+1, -1);

    for (int i = 2; i <= n; i++) {
        int x, y, z; cin >> x >> y >> z;

        adj[x].pb(i);
        a[{x,i}] = y;
        b[{x,i}] = z;
    }

    int sum = 0;
    dfs(1, sum);

    for (int i = 2; i <= n; i++) cout << ans[i] << " "; cout << endl;

    st.clear();
    a.clear(), b.clear();
    st.clear();
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
