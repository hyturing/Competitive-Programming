/* hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define endl "\n"
#define ll long long
const ll  MOD = 1e9+7;

void solve(){
	int n;
	cin >> n;

	vector<int> a(n);
	for(auto &x: a) cin >> x;

	int dp[100][3];
	for(int i = 0; i<100; i++) for(int j = 0; j<3; j++) dp[i][j] = 1000;

	for(int i = 0; i < n; i++){
		if(i==0){
			dp[i][0] = 1;
			if(a[i]==1|a[i]==3) dp[i][1]=0;
			if(a[i]==2|a[i]==3) dp[i][2]=0;
			
			continue;
		}
		dp[i][0] = 1+min({dp[i-1][0],dp[i-1][1],dp[i-1][2]});
		if(a[i]==1|a[i]==3) dp[i][1] = min({dp[i-1][0],dp[i-1][2]});
		if(a[i]==2|a[i]==3) dp[i][2] = min({dp[i-1][0],dp[i-1][1]});
	}	

	cout << min({dp[n-1][0],dp[n-1][1],dp[n-1][2]});
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
