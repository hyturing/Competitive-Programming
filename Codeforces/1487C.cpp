/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  M = 1e9+7;
const ll MM = 998244353;
const int N = 1e5+5;

void solve(){

	// code here
	
	int n;
	cin >> n;

	int ans[101][101], a[n+1];

	for(int i = 1; i < n+1; i++) a[i] = i;

	if(n&1){
		for(int i = 1; i <= n; i++){
			int cnt = 0, j = i+1;

			if(j == n+1) j = 1;
			while(cnt < (n-1)/2){
				ans[a[i]][j] = 1;
				cnt++, j++;
				if(j == n+1) j = 1;
			}

			while(cnt > 0){
				ans[a[i]][j] = -1;
				cnt--, j++;
				if(j == n+1) j = 1;
			}
		}
	}
	else{
		for(int i = 1; i <= n; i++){
			int cnt = 0, j = i+1;
			if(j == n+1) j = 1;
			
			while(cnt < (n-2)/2){
				ans[a[i]][j] = 1;
				cnt++, j++;
				if(j == n+1) j = 1;
			}

			ans[a[i]][j] = 0, j++;
			if(j == n+1) j = 1;

			while(cnt > 0){
				ans[a[i]][j] = -1;
				cnt--, j++;
				if(j == n+1) j = 1;
			}
		}
	}

	for(int i = 1; i <= n; i++){
		for(int j = i+1; j <= n; j++) cout << ans[i][j] << " ";
	}

	cout << "\n";

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
