/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	
	int n;
	cin >> n;

	vector<pair<ll,ll>> v(n);

	for(int i = 0; i < n; i++) cin >> v[i].first;
	for(int i = 0; i < n; i++) cin >> v[i].second;

	sort(v.rbegin(), v.rend());

	for(int i = 1; i < n; i++){
		v[i].second += v[i-1].second;
	}

	ll curr = min(v[0].first, v[n-1].second);

	for(int i = n-2; i >= 0; i--){
		ll x = max(v[i].second, v[i+1].first);
		curr = min(x,curr);
	}

	cout << curr << "\n";

	return;
}

/* 
	-> Read the problem statement carefully and clearly.

	-> Think Brute Force first.
	
	-> While practice if WA think first don't see test cases.
	
	-> If code too long logic maybe incorrect. 
*/

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
