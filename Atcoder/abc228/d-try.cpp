/* hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define endl "\n"
#define ll long long
const ll  MOD = 1e9+7;

void solve(){
	int q;
	cin >> q;
	ll n = 1048576;
	vector<ll> a(n);
	for(auto &x: a) x = -1;
	// for(int i = 0; i < n-1; i++) a[i] = -1;
	// for(auto x: a) cout << x; cout << endl;
	while(q--){
		ll t, x;
		cin >> t >> x;
		if (t==1){
			ll h = x;
			ll index = h%n;
			while(a[index] != -1){
				h++; 
				index = h%n;
			}
			a[index] = x;
		}
		else cout << a[x%n] << endl;
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
