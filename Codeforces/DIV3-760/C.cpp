/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
		
	int n;
	cin >> n;

	vector<ll> a(n);
	for(auto &x: a) cin >> x;

	ll x = a[0], y = a[1];

	for(int i = 0; i < n; i+=2){
		x = __gcd(x,a[i]);
	}

	for(int i = 1; i < n; i+=2){
		y = __gcd(y,a[i]);
	}

	// cout << x << " " << y << "\n";
	int cnt = 0;
	for(int i = 0; i < n; i+=2){
		if(a[i]%y != 0) cnt++;
	}

	if(cnt == n/2+n%2){cout << y << "\n"; return;}

	cnt = 0;

	for(int i = 1; i < n; i+=2){
		if(a[i]%x != 0) cnt++;
	}

	if(cnt == n/2){cout << x << "\n"; return;}

	cout << 0 << "\n";

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
