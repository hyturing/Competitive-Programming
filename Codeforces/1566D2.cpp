/**
 *	Author: hyturing
 *	Created: 25 Feb 2022 01:55:33 IST
 *	Description: 
**/

#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  M = 1e9+7;
const ll MM = 998244353;
const int N = 1e5+5;

void solve(){

	// code here
	
	int n, m;
	cin >> n >> m;

	long long arr[n*m];
	for(auto &x: arr) cin >> x;

	vector<pair<long long, long long>> v(n*m);
	for(int i = 0; i < n*m; i++){
		v[i].first = arr[i], v[i].second = i;
	}

	sort(v.begin(), v.end());

	for(auto &x: v) x.second = -x.second;

	long long ans = 0;

	for(int i = 0; i < n*m; i += m){
		sort(v.begin()+i, v.begin()+i+m);
		for(int j = i; j < i+m; j++){
			for(int k = i; k < j; k++){
				if(-v[k].second < -v[j].second) ans++;
			}
		}
	}

	// for(auto x: v) cout << -x.second+1 << " "; cout << "\n";

	cout << ans << "\n";

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