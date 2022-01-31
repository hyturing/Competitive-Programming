/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  M = 1e9+7;
const ll MM = 998244353;
const int N = 1e5+5;

void solve(){

	// code here

	int n, k;
	cin >> n >> k;

	ll a[k], t[k];

	for(auto &x: a) cin >> x;
	for(auto &x: t) cin >> x;

	vector<ll> c(n,INT_MAX);

	for(int i = 0; i < k; i++){
		c[a[i]-1] = t[i];
	}

	vector<ll> L(n,INT_MAX), R(n,INT_MAX);

	for(int i = n-1; i >= 0; i--){
		if(i == n-1){
			L[i] = min(c[i], L[i]);
			continue;
		}
		L[i] = min(c[i],L[i+1]+1); 
	}

	for(int i = 0; i < n; i++){
		if(i == 0){
			R[i] = min(R[i], c[i]);
			continue;
		}

		R[i] = min(c[i],R[i-1]+1);
	}

	for(int i = 0; i < n; i++){
		cout << min(L[i], R[i]) << " ";
	}

	cout << "\n";

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
