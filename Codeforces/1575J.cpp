/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	
	int n, m, k;
	cin >> n >> m >> k;

	int c[n][m], ans[k], b[k];

	set<pair<int,int>> s;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> c[i][j];
		}
	}

	for(auto &x: b) cin >> x;

	for(int i = 0; i < k; i++){
		int x = 0, y = b[i]-1;
		while(true){
			if(x == n-1 && c[x][y] == 2){
				ans[i] = y+1;
				break;
			}

			if(c[x][y] == 2){
				x++;
			}

			if(c[x][y] == 1){
				c[x][y] = 2;
				y++;
			}

			if(c[x][y] == 3){
				c[x][y] = 2;
				y--;
			}
		}
	}

	for(auto x: ans) cout << x << " ";

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
	// cin >> tc;
	for(int i = 1; i <= tc; i++){
		// cout << "Case #" << i << ": ";
		solve();
	}

	return 0;
}
