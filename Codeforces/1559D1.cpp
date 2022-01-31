/* Author: hyturing - Hemant Kumar Yadav */
// Read the problem statement carefully and clearly.
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

int arr[2001];

int Find(int x){
	int y = x;
	
	while(y != arr[y]){
		y = arr[y];
	}

	int z;

	while(x != arr[x]){
		z = arr[x];
		arr[x] = y;
		x = z;
	}
	return x;
}

void Union(int x, int y){
	x = Find(x), y = Find(y);
	arr[x] = y;
	return;
}

void solve(){

	// code here
	
	for(int i = 1; i < 2001; i++){arr[i] = i;}

	int n, m1, m2;
	cin >> n >> m1 >> m2;

	while(m1--){
		int a, b;
		cin >> a >> b;
		Union(a, b);
	}

	while(m2--){
		int a, b;
		cin >> a >> b;
		Union(a+1001, b+1001);
	}

	vector<pair<int,int>> ans;

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(Find(i) != Find(j) && Find(i+1001) != Find(j+1001)){
				ans.push_back({i,j});
				Union(i,j);
				Union(i+1001,j+1001);
			} 
		}
	}

	cout << ans.size() << "\n";

	for(auto x: ans){
		cout << x.first << " " << x.second << "\n";
	}

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