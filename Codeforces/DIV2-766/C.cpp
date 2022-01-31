/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  M = 1e9+7;
const ll MM = 998244353;
const int N = 1e5+5;

vector<pair<int,int>> adj[N];
int ans[N];
bool visited[N];
vector<int> temp;

void dfs(int u){
	visited[u] = true;

	for(auto v: adj[u]){
		if(!visited[v.first]){
			visited[v.first] = true;
			temp.push_back(v.second);
			dfs(v.first);				
		}
	}
}

void solve(){

	// code here

	int n;
	cin >> n;
	
	for(int i = 1; i <= n; i++){
		adj[i].clear();
		visited[i] = false;
	}	

	temp.clear();

	for(int i = 1; i < n; i++){
		int u, v;
		cin >> u >> v;
		adj[u].push_back({v,i});
		adj[v].push_back({u,i});
	}

	int source;

	for(int i = 1; i <= n; i++){
		if(adj[i].size() > 2){
			cout << -1 << "\n";
			return;
		}

		if(adj[i].size() == 1) source = i;
	}


	dfs(source);

	bool ok = true;

	for(auto x: temp){
		if(ok){ans[x] = 2; ok = false;}
		else{ans[x] = 5; ok = true;}
	}

	for(int i = 1; i < n; i++) cout << ans[i] << " "; cout << "\n";

	return;
}

/* 
	-> Read the problem statement carefully and clearly.

	-> Think Brute Force first.
	
	-> While practice if WA think first don't see test cases.
	
	-> If code too long logic maybe incorrect. 
*/

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
