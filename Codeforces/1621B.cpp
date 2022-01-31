/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	
	int n;
	cin >> n;

	int minL = INT_MAX, costL = INT_MAX, maxR = 0, costR = INT_MAX, maxLen = 0, costLen = INT_MAX;

	for(int i = 0; i < n; i++){
		
		int l, r, c;
		cin >> l >> r >> c;

		if(l < minL){
			minL = l, costL = c;
		}
		if(l == minL){
			costL = min(c,costL);
		}

		if(r > maxR){
			maxR = r, costR = c;
		}
		if(r == maxR){
			costR = min(c,costR);
		}

		if(maxLen < r-l+1){
			maxLen = r-l+1, costLen = INT_MAX;
		}
		if(maxLen == r-l+1){
			costLen = min(c, costLen);
		}

		int ans = costL+costR;

		if(maxLen == maxR-minL+1){
			ans = min(ans,costLen);
		}

		cout << ans << "\n";
	}

	
	
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
