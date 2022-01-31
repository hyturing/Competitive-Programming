/* Author: hyturing - Hemant Kumar Yadav */
// Read the problem statement carefully and clearly.
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	
	int n;
	cin >> n;
	ll a(n);
	set<ll> rem;
	for(auto &x: a) cin >> x;

	for(int i = 0; i < n; i++) rem.insert(a[i]%3);

	int cnt;
	for(auto it: rem){
		if(it == 1 | it == 2) cnt++;
	}

	ll coin;
	if(cnt == 2){
		coin = max({a})/3;

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
