/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

// ll dp[2001][2001] = {0};

// This solution can be improved from nsqrt(n) to nlogn see submission on cf or editorial. Cheers.

void solve(){

	// code here
	int n, k;
	cin >> n >> k;

	ll dp[k+1][n+1] = {0};

	for(int i = 1; i < n+1; i++) dp[1][i] = 1;

	for(int i = 2; i < k+1; i++){
		for(int j = 1; j < n+1; j++){
			for(int k = 1; k*k <= j; k++){
				if(j%k == 0){
					dp[i][j] = (dp[i][j]+dp[i-1][k])%MOD;
					if(j/k != k) dp[i][j] = (dp[i][j]+dp[i-1][j/k])%MOD;
				}	
			}
		}
	}

	ll ans=0;
	
	for(int i = 1; i < n+1; i++){ans = (ans+dp[k][i])%MOD;}

	cout << ans << "\n";
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
