/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define endl "\n"
#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	
	int n;
	cin >> n;

	vector<int> a(n), b(n);
	for(auto &x: a) cin >> x;
	for(auto &x: b) cin >> x;

	map<int,int> m;
	for(int i = 1; i <= n; i++){m[a[i-1]] = i;}
	vector<int> ans(n+1);

	for(int i = 0; i < n; i++){
		if(i+1 >= m[b[i]]) ans[i+1-m[b[i]]]++;
		else ans[n-m[b[i]]+i+1]++;
	}

	int mx = -1;
	for(auto x: ans) mx = max(x,mx);
	cout << mx << endl;
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
