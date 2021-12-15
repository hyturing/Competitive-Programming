/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	int n, k;
	cin >> n >> k;
	vector<ll> a(n), w(k);
	for(auto &x: a) cin >> x;
	for(auto &x: w) cin >> x;

	sort(a.begin(), a.end());
	sort(w.begin(), w.end());

	int r = n-1;
	ll ans(0);
	for(int i = 0; i < k; i++){
		if(w[i] > 1){ans += a[r]; r--;}
		else{ans += 2*a[r]; r--;}
	}
	
	int l = 0;
	for(int i = k-1; i >= 0; i--){
		int size = w[i]-1;
		if(size == 0) continue;
		ans += a[l];
		l += size;
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
