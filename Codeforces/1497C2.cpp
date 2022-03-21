/**
 *	Author: hyturing
 *	Created: 20 Mar 2022 21:51:58 IST
**/

#include <bits/stdc++.h>
using namespace std; 

#define int long long
const int  M = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;

void solve(){

	// code here
	
	int n, k;
	cin >> n >> k;

	int a, b, c;

	n = n - k + 3;

	if(n&1){
		a = 1, b = c = n/2;
	}
	else{
		if(n%4 == 0){
			a = n/2, b = c = n/4;
		}
		else{
			a = 2, b = c = n/2-1;
		}
	}

	// cout << a << " " << b << " " << c << endl;

	vector<int> v(k, 1);

	v[k-3] = a, v[k-2] = b, v[k-1] = c;

	for(auto x: v) cout << x << " "; cout << "\n";

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
