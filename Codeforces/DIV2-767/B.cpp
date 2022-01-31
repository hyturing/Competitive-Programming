/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  M = 1e9+7;
const ll MM = 998244353;
const int N = 1e5+5;

void solve(){

	// code here
	
	int l, r, k;
	cin >> l >> r >> k;

	if(l == 1 & r == 1){
		cout << "NO\n";
		return;
	}

	if(l == r){
		cout << "YES\n";
		return;
	}

	if(l%2 == r%2){
		int m;
		if(l&1){
			m = r-(l-1);
			m = m/2+1;
		}
		else{
			m = r-(l-1);
			m = m/2;
		}

		// cout << "m " << m << endl;

		if(m <= k) cout << "YES\n";
		else cout << "NO\n";
	}
	else{
		int m = (r-(l-1))/2;
		if(k >= m){
			cout << "YES\n";
		}
		else{
			cout << "NO\n";
		}
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
