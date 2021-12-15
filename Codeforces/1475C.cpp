/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	ll a, b, k;
	cin >> a >> b >> k;

	map<ll,ll> aa, bb;
	for(int i = 0; i < k; i++){
		int x;
		cin >> x;
		aa[x]++;
	}

	for(int i = 0; i < k; i++){
		ll x;
		cin >> x;
		bb[x]++;
	}

	k = (k*k-k)/2;

	for(auto it: aa){
		ll x = it.second;
		x = (x*x-x)/2;
		k -= x;
	}

	for(auto it: bb){
		ll x = it.second;
		x = (x*x-x)/2;
		k -= x;
	}

	cout << k << "\n";

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
