/**
 *	Author: hyturing
 *	Created: 27 Feb 2022 20:02:44 IST
 *	Description: 
**/

#include <bits/stdc++.h>
using namespace std; 

#define int long long
const long long  M = 1e9+7;
const long long MM = 998244353;
const int N = 1e5+5;

vector<int> adj[N];
vector<bool> visited(N);
vector<pair<int,int>> p(N);
vector<pair<int,int>> dp(N);

void dfs(int s){
	if(visited[s]) return;
	visited[s] = true;

	for(auto u: adj[s]){
		dp[u].first = max(abs(p[u].first-p[s].first)+dp[s].first, abs(p[u].first-p[s].second)+dp[s].second);
		dp[u].second = max(abs(p[u].second-p[s].first)+dp[s].first, abs(p[u].second-p[s].second)+dp[s].second);
	}
}

void solve(){

	// code here

	for(auto x: dp){
		x.first = 0, x.second = 0;
	}

	for(auto x: adj){
		x.clear();
	}

	for(auto x: p){
		x.first = 0, x.second = 0;
	}

	for(auto x: dp){
		x.first = 0, x.second = 0;
	}

	for(auto x: visited) x = 0;
	
	int n;
	cin >> n;

	for(int i = 1; i <= n; i++) cin >> p[i].first >> p[i].second;

	for(int i = 0; i < n-1; i++){
		int a, b;
		cin >> a >> b;
		adj[a].push_back(b), adj[b].push_back(a);
	}

	dfs(1);
	
	// for(int i = 1; i <= n; i++) cout << dp[i].first << " " << dp[i].second << endl;

	int ans = 0;
	for(int i = 1; i <= n; i++) ans = max(dp[i].first,max(ans,dp[i].second));

	cout << ans << "\n";

	return;
}

int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int tc = 1;
	cin >> tc;
	for(int i = 1; i <= tc; i++){
		// cout << "Case #" << i << ": ";
		solve();
	}

	return 0;
}
