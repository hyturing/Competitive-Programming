/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	int n;
	cin >> n;
	ll a[2][n], dp[n][3];
	for(int i = 0; i < n; i++) cin >> a[0][i];
	for(int i = 0; i < n; i++) cin >> a[1][i];

	for(int i = 0; i < n; i++){
		if(i==0){
			dp[i][0] = 0;
			dp[i][1] = a[0][i];
			dp[i][2] = a[1][i];
			continue;
		}

		dp[i][0] = max({dp[i-1][0], dp[i-1][1], dp[i-1][2]});
		dp[i][1] = a[0][i] + max(dp[i-1][0], dp[i-1][2]);
		dp[i][2] = a[1][i] + max(dp[i-1][0], dp[i-1][1]);
	}

	// for(int i = 0; i < n; i++){for(int j = 0; j < 3; j++) cout << dp[i][j] << " "; cout << endl;}

	cout << max({dp[n-1][0], dp[n-1][1], dp[n-1][2]});
	
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
