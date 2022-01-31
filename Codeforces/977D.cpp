/* Author: hyturing - Hemant Kumar Yadav */
// Read the problem statement carefully and clearly.
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	
	int n;
	cin >> n;
	vector<pair<ll,ll>> a(n);
	for(auto &x: a){
		cin >> x.second;
		ll num = x.second;
		ll cnt = 0;
		
		while(num % 3 == 0){
			cnt++;
			num /= 3;
		}

		x.first = -cnt;
	}

	sort(a.begin(), a.end());
	for(auto &x: a) cout << x.second << " ";

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
