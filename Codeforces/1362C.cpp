/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

ll power(ll num){
	ll n = 1;
	while(num--){
		n = n*2;
	}

	return n-1;
}

void solve(){

	// code here
	// Note: Forward loop in bitset runs backwards.
	ll n;
	cin >> n;

	bitset<60> x(n);
	vector<ll> f;
	for(int i = 0; i < 60; i++){
		if(x[i]==1) f.push_back(i+1);
	}
	
	int len = f.size();
	for(int i = 0; i < len; i++){
		f[i] = power(f[i]);
	}

	ll ans = 0;
	for(auto &c: f) ans += c;
	
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
