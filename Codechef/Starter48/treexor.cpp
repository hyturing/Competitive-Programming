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

vector<vector<int>> g;
int n, k;
vector<int> sum;
string ans;

void dfs(int v) {
	for (auto u: g[v]) {
		dfs(u);
		sum[v] += sum[u];
	}

	if (k) {
		if (sum[v]%2 == 0) {
			ans[v-1] = '1';
			sum[v]++;
		}
		k--;
	}
	else {
		if (sum[v]%2 == 1) {
			ans[v-1] = '1';
			sum[v]++;
		}
	}

	return;
}

void solve() {

    // code here
    
    ans.clear();
	cin >> n >> k;

	g = vector<vector<int>> (n+1, vector<int>());
	sum = vector<int> (n+1, 0);

	for (int i = 2; i <= n; i++) {
		int x; cin >> x;
		g[x].push_back(i);
	}

	for (int i = 0; i < n; i++) ans.push_back('0');

	dfs(1);

	cout << ans << "\n";


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

