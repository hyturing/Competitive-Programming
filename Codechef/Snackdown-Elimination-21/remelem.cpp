/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	ll n, k;
	cin >> n >> k;

	vector<ll> a(n);
	for(auto &x: a) cin >> x;
	sort(a.begin(), a.end());
	if(n==1){cout << "YES\n"; return;}
	
	if(a[0]+a[n-1] <= k) cout << "YES\n";
	else cout << "NO\n";

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
