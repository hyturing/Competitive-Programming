/* Author: hyturing - Hemant Kumar Yadav */
// Read the problem statement carefully and clearly.
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	
	ll n;
	cin >> n;

	if(n&1){
		ll k = n-1;
		k /= 2;
		if(k&1){
			cout << k-2 << " " << k+2 << " " << 1 << "\n";
			// cout << "GCD : " << __gcd(k-2, k+2) << endl;
		}
		else{
			cout << k-1 << " " << k+1 << " " << 1 << "\n";
			// cout << "GCD : " << __gcd(k-1, k+1) << endl;
		}
	}
	else{
		ll k = n-1;
		cout << k/2 << " " << k/2+1 << " " << 1 << "\n";
		// cout << "GCD : " << __gcd(k/2, k/2+1) << endl;
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
