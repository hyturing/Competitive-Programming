/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;


void solve(){

	// code here

	int n;
	cin >> n;

	vector<int> cnt(100010);
	vector<ll> f(100010);

	for(int i = 0; i < n; i++){int x; cin >> x; cnt[x]++;}
	for(int i = 1; i <= 100010; i++){
		f[i] = (ll)cnt[i]*i;
		if(i-2 > 0){
			f[i] += f[i-2];
		}

		if(f[i-1] > f[i]) f[i] = f[i-1];
	}

	cout << f[100010-1];
	
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
