/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	
	int n, k;
	cin >> n >> k;
	vector<ll> a, b;
	for(int i = 0; i < n; i++){
		ll x;
		cin >> x;
		if(x > 0) a.push_back(x);
		else b.push_back(-x);
	}

	sort(a.rbegin(), a.rend());
	sort(b.rbegin(), b.rend());

	ll ans = 0;
	for(int i = 0; i < a.size(); i+=k) ans += 2*a[i];
	for(int i = 0; i < b.size(); i+=k) ans += 2*b[i];

	ll mx = max((!a.empty() ? a[0]: 0), (!b.empty() ? b[0]: 0));

	cout << ans - mx << "\n";

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
