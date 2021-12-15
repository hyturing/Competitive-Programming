/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	
	int n;
	cin >> n;
	ll a[n];
	ll mx = -1;
	for(auto &x: a){cin >> x; mx = max(mx, x);}

	int ans = 0, curr = a[n-1];
	for(int i = n-1; i >= 0; i--){
		if(a[i] > curr){curr = a[i]; ans++;}
		if(curr == mx) break;
	}

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
