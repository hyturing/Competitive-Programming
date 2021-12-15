/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	
	int n, k;
	cin >> n >> k;

	vector<int> a(n);
	for(auto &x: a) cin >> x;

	sort(a.begin(), a.end());
	
	ll ans = 0;
	for(int i = 0; i < n-2*k; i++){
		ans += a[i];
	}

	for(int i = n-2*k; i < n-k; i++){
		ans += a[i]/a[i+k];
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
