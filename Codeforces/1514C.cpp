/**
 *	Author: hyturing
 *	Created: 06 Mar 2022 19:13:40 IST
**/

#include <bits/stdc++.h>
using namespace std; 

#define int long long
const int  M = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;

void solve(){

	// code here
	
	int n;
	cin >> n;

	vector<int> ok(n);
	int p = 1;

	for(int i = 1; i < n; i++){
		if(__gcd(n,i) == 1) ok[i] = 1, p = (p*i)%n;
	}

	if(p != 1) ok[p] = 0;

	int cnt = count(ok.begin()+1, ok.end(), 1);

	cout << cnt << "\n";

	for(int i = 1; i < n; i++) if(ok[i]) cout << i << " ";

	return;
}

int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int tc = 1;
	// cin >> tc;
	for(int i = 1; i <= tc; i++){
		// cout << "Case #" << i << ": ";
		solve();
	}

	return 0;
}
