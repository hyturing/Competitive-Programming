/* hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define endl "\n"
#define ll long long
const ll  MOD = 1e9+7;

ll sum(ll n){
	return (n*n+n)/2;
}

ll emote_cnt(ll n, ll k){
	if(n <= k) return sum(n);
	else{
		n -= k;
		return sum(k)+sum(k-1)-sum(k-n-1);
	}
}

void solve(){
	ll k, x;
	cin >> k >> x;
	
	ll lo = 0, hi = 2*k-1;
	while(lo < hi){
		ll mid = (lo+hi)/2;
		if(emote_cnt(mid,k) >= x) hi = mid;
		else lo = mid+1;
	}
	
	cout << lo << endl;
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
