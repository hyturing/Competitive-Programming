/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;
const ll inf = 1e18;

ll lcm(ll a, ll b){
	return a / __gcd(a,b) * b;
}
void solve(){

	// code here
	ll x;
	cin >> x;

	ll res = x;
	for(ll i = 1; i*i <= x; i++){
		if(x%i==0 and __gcd(i,x/i) == 1){
			res = min(res, max(i, x/i));
		}
	}

	cout << res << " " << x/res;
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
