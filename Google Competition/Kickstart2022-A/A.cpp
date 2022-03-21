/**
 *	Author: hyturing
 *	Created: 20 Mar 2022 10:39:16 IST
**/

#include <bits/stdc++.h>
using namespace std; 

#define int long long
const int  M = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;

void solve(){

	// code here
	
	string I, P;
	cin >> I >> P;

	int cnt = 0, i = 0, j = 0, n = I.size(), m = P.size();

	while(i < n & j < m){
		if(I[i] == P[j]) i++, j++;
		else cnt++, j++;
	}

	if(i == n){
		if(j == m) cout << cnt << "\n";
		else cout << cnt+m-j << "\n";
	}
	else cout << "IMPOSSIBLE\n";

	return;
}

int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int tc = 1;
	cin >> tc;
	for(int i = 1; i <= tc; i++){
		cout << "Case #" << i << ": ";
		solve();
	}

	return 0;
}
