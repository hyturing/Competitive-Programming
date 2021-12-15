/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	int n;
	cin >> n;

	ll s[n+1], ans[n+1];
	for(int i = 1; i <= n; i++) cin >> s[i];
	for(auto &x: ans) x = 1;

	for(int i = 2; i <= n; i++){
		set<int> div;
		for(int j = 1; j*j <= i; j++){
			if(i%j==0){div.insert(j); div.insert(i/j);}
		}

		for(auto x: div){
			if(s[x] < s[i]) ans[i] = max(ans[i], ans[x]+1);
		}
	}

	ll mx=0;
	for(auto x: ans) mx = max(x,mx);
	cout << mx << endl;
		
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
