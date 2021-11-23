/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define endl "\n"
#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	
	ll n, k;
	cin >> n >> k;

	vector<ll> a(n);
	for(auto &x: a) cin >> x;

	map<ll,ll> m;
	for(auto x: a){
		if(x%k > 0) m[x%k]++;
	}

	ll mx = -1, cnt=0;
	for(auto x: m){
		if(x.first > mx){mx = x.first; cnt = x.second;}
	}

	mx = 0;
	ll num=1;
	for(auto x: m){
		if(x.second > mx){mx = x.second; num = x.first;}
	}

	cout << k*(mx-1)+k-num+1 << endl;
	
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
