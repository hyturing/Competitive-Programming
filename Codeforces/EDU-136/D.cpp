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
vector<int> height;

void dfs(int root, int sum) {

    if (adj[root].size() == 0) {
        height.push_back(sum);
    }
    else {
        for (auto x: adj[root]) {
            dfs(x, sum+1);
        }
    }

    return;
}

void solve() {

    // code here
    
    int n, k; cin >> n >> k;

    adj = vector<vector<int>> (n+1, vector<int>());

    for (int i = 2; i <= n; i++) {
        int t; cin >> t;
        adj[t].push_back(i);
    }

    dfs(1, 0);

    priority_queue<int> pq;

    for (auto x: height) pq.push(x);

    while (k--) {

        if (pq.size() == 1) {
            int t = pq.top();
            pq.pop();

            if (t&1) {
                pq.push(t/2);
                pq.push(t/2+1);
            }
            else {
                pq.push(t/2);
                pq.push(t/2);
            }

            continue;
        }

        int t = pq.top();
        t--;

        pq.pop();
        pq.push(t);
        pq.push(1);
    }

    cout << pq.top() << endl;
    
    height.clear();

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
