/**
 *	Author: hyturing
 *	Created: 
**/

#include <bits/stdc++.h>
using namespace std; 

#define int long long
const int  M = 1e9;
const int MM = 998244353;
const int N = 1e5+5;


void solve(){

	// code here
	
	int n;
	cin >> n;

	if(n > 19) cout << "NO\n";
	else{
		cout << "YES\n";

		int k = 1;
		cout << k << " ";

		for(int i = 1; i < n; i++){
			k *= 3;
			cout << k << " ";
		}

		cout << "\n";
	}

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
