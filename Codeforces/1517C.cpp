/* Author: hyturing - Hemant Kumar Yadav */
// Read the problem statement carefully and clearly.
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	
	int n;
	cin >> n;

	int grid[n][n];
	
	for(int i = 0; i < n; i++) for(int j = 0; j < n; j++) grid[i][j] = -1;
	for(int i = 0; i < n; i++) cin >> grid[i][i];	

	int cnt;

	for(int i = 0; i < n; i++){
		cnt = grid[i][i];
		int j = i, k = i;
		while(cnt-1 > 0){
			if(k > 0 & grid[j][k-1] == -1){
				k--;
				grid[j][k] = grid[i][i];
				cnt--;
			}
			else{
				j++;
				grid[j][k] = grid[i][i];
				cnt--;
			}
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++) if(i >= j) cout << grid[i][j] << " "; cout << "\n";
	}

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
