/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	
	int n;
	cin >> n;

	ll a[n];
	map<ll,ll> freq;

	for(auto &x: a){
		cin >> x;
		freq[x]++;
	}

	priority_queue<ll> q;
	for(auto &it: freq) q.push(it.second);

	int sz = n;
	while(q.size() >= 2){
		ll cnt1 = q.top(); q.pop();
		ll cnt2  = q.top(); q.pop();
		cnt1--;
		cnt2--;
		sz -= 2;
		if(cnt1) q.push(cnt1);
		if(cnt2) q.push(cnt2);
	}

	cout << sz << "\n";

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
