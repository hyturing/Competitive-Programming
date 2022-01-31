/* Author: hyturing - Hemant Kumar Yadav */
// Read the problem statement carefully and clearly.
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	
	ll n, g, b;
	cin >> n >> g >> b;

	ll min_g = n/2+n%2;

	bool rem = min_g%g;
	ll need = min_g/g + rem ,need_b = n/2;

	if((need-1)*b >= need_b){
		ll ans = (need-1)*(g+b) + min_g - (need-1)*g;
		cout << ans << "\n";
	}
	else{
		cout << n << "\n";
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
