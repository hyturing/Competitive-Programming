/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  M = 1e9+7;
const ll MM = 998244353;
const int N = 1e5+5;

void solve(){

	// code here
	
	int n, k;
	cin >> n >> k;

	vector<int> g[n];
	vector<int> layer(n), rem(n);

	for(int i = 0; i < n-1; i++){
		int a, b;
		cin >> a >> b;
		a--, b--;
		g[a].push_back(b);
		g[b].push_back(a);
		rem[a]++, rem[b]++;
	}

	queue<int> q;

	for(int i = 0; i < n; i++){
		if(rem[i] == 1){
			q.push(i);
			layer[i] = 1;
		}
	}


	while(!q.empty()){
		int curr = q.front();
		q.pop();


		for(auto x: g[curr]){
			if(rem[x] > 0) rem[x]--;
			if(rem[x] == 1){
				q.push(x);
				layer[x] = layer[curr]+1;
			}
		}
	}

	int ans = 0;

	for(auto x: layer){
		if(x > k) ans++;
	}

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
