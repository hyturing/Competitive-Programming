/**
 *	Author: hyturing
 *	Created: 18 Mar 2022 01:13:12 IST
**/

#include <bits/stdc++.h>
using namespace std; 

#define int long long
const int  M = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const int INF = 1e18;

int MAXSUM = 100*100+10;

int sqr(int x){
	return (x*x);
}

void solve(){

	// code here
	
	int n;
	cin >> n;

	int a[n+1], b[n+1];

	for(int i = 1; i <= n; i++) cin >> a[i];
	for(int i = 1; i <= n; i++) cin >> b[i];

	int ans = 0, s = 0, mx = INF;

	for(int i = 1; i <= n; i++){
		ans += sqr(a[i])+sqr(b[i]);
		s += a[i]+b[i];
	}

	vector<vector<int>> dp(n+1, vector<int>(s+1, 0));

	dp[0][0] = 1;

	for(int i = 0; i < n; i++){
		for(int j = 0; j <= s; j++){
			if(dp[i][j]){
				dp[i+1][j+a[i+1]] = 1;
				dp[i+1][j+b[i+1]] = 1;
			}
		}
	}


	for(int j = 0; j < s+1; j++){
		if(dp[n][j]){
			mx = min(mx, sqr(j)+sqr(s-j));
		}
	}

	// cout << mx << endl;

	ans = (n-2)*ans+mx;

	cout << ans << "\n";

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
