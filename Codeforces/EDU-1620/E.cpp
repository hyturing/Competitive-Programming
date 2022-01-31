/* Author: hyturing - Hemant Kumar Yadav */
// Read the problem statement carefully and clearly.
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	
	int q;
	cin >> q;

	map<int,vector<int>> m;
	int cnt = 0;
	while(q--){
		int r;
		cin >> r;
		if(r == 1){
			int x;
			cin >> x;
			cnt++;
			cin >> x;
			vector<int> temp;
			temp.push_back(cnt);
			m[x] = temp;
		}
		if(r == 2){
			int x, y;
			cin >> x >> y;
			if(m.find(x) != m.end()){
				
			}
		}
	}

	vector<int> ans(cnt);
	for(auto it: m){
		cout << it.first << " ";
		// int x = it.first;
		// vector<int> n = it.second;
		// for(int i = 0; i < n.size(); i++){
		// 	ans[n[i]-1] = x;
		// }
	}

	// for(auto x: ans) cout << x << " ";

	return;
}

int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int tc = 1;
	// cin >> tc;
	for(int i = 1; i <= tc; i++){
		// cout << "Case #" << i << ": ";
		solve();
	}

	return 0;
}
