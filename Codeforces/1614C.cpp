/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	
	int n, m;
	cin >> n >> m;

	// vector<ll> a(n+1);

	// vector<pair<pair<int,int>, ll>> ors;

	// for(int i = 0; i < m; i++){
	// 	int l, r;
	// 	ll x;

	// 	cin >> l >> r >> x;

	// 	ors.push_back({{l,r},x});
	// }

	// sort(ors.begin(), ors.end());

	// for(int i = 0 ; i < m; i++){
	// 	a[ors[i].first.second] = ors[i].second;
	// }

	// ll bit = 0;

	// for(auto y: a) bit |= y;

	// bit %= MOD;

	ll bit = 0;

	for(int i = 0; i < m; i++){
		int l, r; ll x;
		cin >> l >> r >> x;
		 bit |= x;
	}

	bit = bit%MOD;

	for(int i = 0; i < n-1; i++){
		bit *= 2;
		bit %= MOD;
	}

	cout << bit << "\n";

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
