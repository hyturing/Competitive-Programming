/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	
	int n, m, r, c;
	cin >> n >> m >> r >> c;

	char arr[n][m];

	int cnt = 0;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> arr[i][j];
			if(arr[i][j] == 'W') cnt++;
		}
	}

	if(cnt == n*m){cout << -1 << "\n"; return;}

	if(arr[r-1][c-1] == 'B'){
		cout << 0 << "\n";
		return;
	}

	for(int i = 0; i < n; i++){
		if(arr[i][c-1] == 'B'){
			cout << 1 << "\n";
			return;
		}
	}

	for(int j = 0; j < m; j++){
		if(arr[r-1][j] == 'B'){
			cout << 1 << "\n";
			return;
		}
	}

	cout << 2 << "\n";

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
