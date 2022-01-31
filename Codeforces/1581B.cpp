/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  M = 1e9+7;
const ll MM = 998244353;
const int N = 1e5+5;

void solve(){

	// code here
	
	long long n, m, k;
	cin >> n >> m >> k;

	if(m < n-1){
		cout << "NO\n";
		return;
	}

	if(m > (n*n-n)/2){
		cout << "NO\n";
		return;
	}

	if(n == 1){
		if(k > 1) cout << "YES\n";
		else cout << "NO\n";

		return;
	}

	if(m >= n-1 & m < (n*n-n)/2){
		if(k > 3) cout << "YES\n";
		else cout << "NO\n";
	}

	if(m == (n*n-n)/2){
		if(k > 2) cout << "YES\n";
		else cout << "NO\n";
	}

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
