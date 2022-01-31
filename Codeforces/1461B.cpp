/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	
	int n, m;
	cin >> n >> m;

	char c[n][m];

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++) cin >> c[i][j];
	}

	int ans = 0, dp[n][m], x[n][m];

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(c[i][j] == '.') x[i][j] = 0;
			else x[i][j] = 1;

			if(j == 0){
				dp[i][j] = x[i][j];
				continue;
			}

			dp[i][j] = dp[i][j-1] + x[i][j]; 
		}
	}

	// for(int i = 0; i < n; i++){
	// 	for(int j = 0; j < m; j++) cout << dp[i][j] << " "; cout << endl;
	// }	


	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){

			if(c[i][j] == '*'){

				for(int k = i; k < n; k++){
					int h = k-i+1;
					int left = j-h+1, right = j+h-1;
					if(left < 0 | right > m-1) break;
					if(dp[k][right]-dp[k][left]+x[k][left] == 2*h-1) ans++;
					else break;
				}
			}
		}
	}

	cout << ans << "\n";

	return;
}

/* 
	-> Read the problem statement carefully and clearly.

	-> Think Brute Force first.
	
	-> While practice if WA think first don't see test cases.
	
	-> If code too long logic maybe incorrect. 
*/

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
