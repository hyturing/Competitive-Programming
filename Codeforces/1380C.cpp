/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	ll n, x;
	cin >> n >> x;

	vector<ll> a(n);
	for(auto &c: a) cin >> c;	
	sort(a.rbegin(), a.rend());

	ll cnt = 0, sum = 0, len = 0;

	for(auto c: a){
		if(sum == 0){
			sum = c;
			len++;
			if(sum >= x){
				cnt++;
				sum = 0;
				len = 0;
			}
		}
		else{
			len++;
			sum = len*c;
			if(sum >= x){
				cnt++;
				sum = 0;
				len = 0;
			}
		}
	}

	cout << cnt << "\n";

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
