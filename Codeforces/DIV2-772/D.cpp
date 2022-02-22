/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  M = 1e9+7;
const ll MM = 998244353;
const int N = 1e5+5;

void solve(){

	// code here
	
	long long n, p;
	cin >> n >> p;

	long long a[n];
	for(auto &x: a) cin >> x;

	for(auto &x: a){
		long long k = 0;
		x /= 2;
		while(x > 0){
			k++;
			x /= 2;
		}

		x = k;
	}

	long long ans = 0;

	for(auto &x: a){
		if(x < p){
			long long r = p-x-1;
			ans += r;
			while(x < p-2){
				ans += (p-x)/2;
				x++;
			}

			ans %= M;
		}
	cout << ans << "\n";
		
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
