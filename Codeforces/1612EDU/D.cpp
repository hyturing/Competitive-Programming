/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define endl "\n"
#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	ll a, b, x;
	cin >> a >> b >> x;

	if(a > b) swap(a,b);

	bool ok = false;
	if(x > b){cout << "NO" << endl; return;}
	while(true){
		if(a==0|ok) break;
		if(x<=b & x>=a & x%a==b%a) ok = true;
		else{
			b = b%a;
			if(a > b) swap(a,b);
		} 
	}
	
	if(ok) cout << "YES" << endl;
	else cout << "NO" << endl;
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
