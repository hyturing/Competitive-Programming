/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here

	int n, m;
	cin >> n >> m;

	vector<int> ans;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){

			ans.push_back(max({i+j, m+i-j-1, n-i+j-1, n+m-i-j-2}));
		}
	}

	sort(ans.begin(), ans.end());

	for(auto x: ans) cout << x << " "; cout << "\n";

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
