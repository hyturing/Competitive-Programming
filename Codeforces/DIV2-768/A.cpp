/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  M = 1e9+7;
const ll MM = 998244353;
const int N = 1e5+5;

void solve(){

	// code here

	int n;
	cin >> n;

	int a[n], b[n];
	for(auto &x: a) cin >> x;
	for(auto &x: b) cin >> x;

	for(int i = 0; i < n; i++){
		if(a[i] > b[i]) swap(a[i], b[i]);
	}

	int m1 = 0, m2 = 0;

	for(int i = 0; i < n; i++){
		if(a[i] > m1) m1 = a[i];
		if(b[i] > m2) m2 = b[i];
	}

	cout << m1*m2 << "\n";
	
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
