/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here

	int n;
	cin >> n;

	ll sum(0);
	vector<ll> a(n), pre(n+1);
	for(int i = 0; i < n; i++){
		ll x; cin >> x; sum += x;
		pre[i+1] = pre[i]+x;
	}

	// for(auto x: pre) cout << x << " "; cout << endl;

	ll cnt=0, ans=0;
	if(sum%3 == 0){
		ll num = sum/3;
		for(int i = 1; i < n; i++){
			if(pre[i]==2*num) ans+=cnt;
			if(pre[i]==num) cnt++;
		}

		cout << ans;
		return;
	}

	cout << 0;
	
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
