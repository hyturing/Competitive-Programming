/* hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define endl "\n"
#define ll long long
const ll  mod = 1e9+7;
const ll inf = 1e18;

/*
	It is clear that b1 == bn ans b1 must be super mask of all the other numbers also we will take
	b1 to be minimum because if b1 is not minimum that pre1 >= prex (where x > 1) may not hold forever 
	as b1 >= b1&b2&b3&......bx and if one number smaller that b1 occurs on RHS than it will break.

	if cnt of min >= 2 -> ans = (cnt*(cnt-1)*(n-2)!)%mod
	else 0
*/

void solve(){
	ll n;
	cin >> n;

	ll a[n], mi(inf);
	for(auto &x: a){cin >> x; mi = min(mi,x);}
	
	ll cnt(0);
	for(auto x: a){
		if(mi==x) cnt++;
		if((mi&x) != mi){cout << 0 << endl; return;}
	}
	
	
	ll ans=1;
	for(int i = 1; i <= n-2; i++) ans = (ans*i)%mod;
	ans = (ans*cnt)%mod;
	ans = (ans*(cnt-1))%mod;
	cout << ans << endl;

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
