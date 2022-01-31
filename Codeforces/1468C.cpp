/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	
	set<pair<int,int>> mono, poly;

	int q, i = 1;
	cin >> q;

	while(q--){
		int t;
		cin >> t;

		if(t==1){
			int m;
			cin >> m;
			mono.insert({i,m});
			poly.insert({m,-i});
			i++;
		}
		if(t==2){
			auto it = mono.begin();
			cout << it->first << " ";
			poly.erase({it->second, -1*it->first});
			mono.erase(it);
		}
		if(t==3){
			auto it = poly.end(); it--;
			cout << -1*it->second << " ";
			mono.erase({-1*it->second, it->first});
			poly.erase(it);
		}
	}

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
	// cin >> tc;
	for(int i = 1; i <= tc; i++){
		// cout << "Case #" << i << ": ";
		solve();
	}

	return 0;
}
