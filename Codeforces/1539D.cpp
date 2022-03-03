/**
 *	Author: hyturing
 *	Created: 26 Feb 2022 18:27:50 IST
 *	Description: 
**/

#include <bits/stdc++.h>
using namespace std; 

#define ll long long
const ll  M = 1e9+7;
const ll MM = 998244353;
const int N = 1e5+5;

void solve(){

	// code here
	
	int n;
	cin >> n;

	vector<pair<ll,ll>> v(n);

	for(int i = 0; i < n; i++){
		cin >> v[i].second >> v[i].first;
	}

	sort(v.begin(), v.end());

	int l = 0, r = n-1;
	long long ans = 0, bought = 0;

	while(l <= r){
		if(v[l].first <= bought){
			bought += v[l].second;
			ans += v[l].second;
			l++;
		}
		else{
			long long req = min(v[l].first - bought, v[r].second);
			bought += req;
			v[r].second -= req;
			ans += 2*req;
			if(v[r].second == 0){
				r--;
			}
		}
	}

	cout << ans << "\n";

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
