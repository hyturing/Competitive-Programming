/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  M = 1e9+7;
const ll MM = 998244353;
const int N = 1e5+5;

int complement(int k, int n){
	int cnt = 0;
	while(n > 1){
		n /= 2;
		cnt++;
	}	

	int one = 1;
	for(int i = 0; i < cnt-1; i++){
		one = (one<<1)+1;
	}
	return k^one;
}

void solve(){

	// code here
	
	int n, k;
	cin >> n >> k;

	vector<pair<int,int>> ans;

	if(k < n-1){

		ans.push_back({k, n-1});

		for(int i = 1; i < n/2; i++){
			int j = complement(i, n);
			if(j == k | i == k){
				(i == k ? ans.push_back({0,j}) : ans.push_back({0,i}));
				continue;
			}
			ans.push_back({i, j});
		}
	}
	else if(k == n-1 & n > 4){
		ans.push_back({n-2, k});
		ans.push_back({1, n-3});
		ans.push_back({0, complement(n-3,n)});
		for(int i = 3; i < n/2; i++){
			int j = complement(i, n);
			ans.push_back({i, j});
		}
	}

	if(ans.size() == 0){
		cout << -1 << "\n";
	}
	else{
		for(auto x: ans) cout << x.first << " " << x.second << "\n";
	}
	

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
