/**
 *		Author: hyturing
 *		Created: 23 Feb 2022 03:18:05
 *		Description: Interesting problem, clever use of parity that I have ever seen.
**/

#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  M = 1e9+7;
const ll MM = 998244353;
const int N = 1e5+5;

void solve(){

	// code here
	
	int n;
	long long x, y;
	cin >> n >> x >> y;

	long long sum = x+y;
	for(int i = 0; i < n; i++){
		long long a;
		cin >> a, sum += a;
	}

	if(sum&1) cout << "Bob\n";
	else cout << "Alice\n";

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
