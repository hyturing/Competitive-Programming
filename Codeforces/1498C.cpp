/**
 *	Author: hyturing
 *	Created: 20 Mar 2022 13:05:44 IST
**/

#include <bits/stdc++.h>
using namespace std; 

#define int long long
const int  M = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;

int dp[1001][1001][2];
int n, k;
int solver(int plane, int power, int dir){
	if(k == 1) return 1;

	if(dp[plane][power][dir] != -1) return dp[plane][power][dir];

	int ans = 2;

	if(dir == 0){
		if(plane < n){
			ans += solver(plane+1, power, 0)-1;
		}

		ans %= M;

		if(plane > 1){
			ans += solver(plane-1, power-1, 1)-1;
		}

		ans %= M;

		dp[plane][power][dir] = ans;
	}
	else{
		if(plane < n){
			ans += solver(plane-1, power-1, 0)-1;
		}

		ans %= M;
		
		if(plane > 1){
			ans += solver(plane-1, power, 1)-1;
		}
		
		ans %= M;

		dp[plane][power][dir] = ans;
	}

	return ans;
}

void solve(){

	// code here
	
	memset(dp, -1, sizeof(dp));

	cin >> n >> k;

	cout << solver(1, k, 0) << "\n"; 
	// 1 -> right, 0 -> left;	

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
