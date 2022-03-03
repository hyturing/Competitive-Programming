/**
 *	Author: hyturing
 *	Created: 02 Mar 2022 19:37:12 IST
 *	Description: 
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

	int a[n], b[n];
	for(auto &x: a) cin >> x;
	for(auto &x: b) cin >> x;

	int pre[n], suf[n];

	for(int i = 0; i < n; i++){
		if(i == 0){pre[i] = a[i]*b[i]; continue;}
		pre[i] = pre[i-1]+a[i]*b[i];
	}

	for(int i = n-1; i >= 0; i--){
		if(i == n-1){suf[i] = a[i]*b[i]; continue;}
		suf[i] = suf[i+1]+a[i]*b[i];
	}

	int dp[n][n];

	// for(int i = 0; i < n; i++) dp[i][i] = a[i]*b[i];

	for(int i = 0; i < n; i++){
		for(int l = i, r = i+1; l >= 0 & r < n; l--, r++){
			if(r-l == 1){
				dp[l][r] = a[l]*b[r]+a[r]*b[l];
			}
			else{
				dp[l][r] = dp[l+1][r-1]+a[l]*b[r]+a[r]*b[l];
			}
		}

		dp[i][i] = a[i]*b[i];
		for(int l = i-1, r = i+1; l >= 0 & r < n; l--, r++){
			if(r-l == 2){
				dp[l][r] = dp[i][i]+a[l]*b[r]+a[r]*b[l];
			}
			else dp[l][r] = dp[l+1][r-1]+a[l]*b[r]+a[r]*b[l];
		}
	}

	int ans = pre[n-1];

	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			int sum = 0;
			sum += dp[i][j];
			if(i > 0) sum += pre[i-1];
			if(j < n-1) sum += suf[j+1];

			ans = max(ans, sum);
		}
	}

	// for(auto x: pre) cout << x << " "; cout << endl;
	// for(auto x: suf) cout << x << " "; cout << endl;

	// for(int i = 0; i < n; i++){
	// 	for(int j = i+1; j < n; j++) cout << dp[i][j] << " ";
	// }

	// cout << endl;

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
