/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	
	int n;
	cin >> n;

	ll arr[n], good[n+1] = {0};

	for(auto &x: arr) cin >> x;

	for(int i = 0; i < n; i++){
		while(arr[i] > n) arr[i] /= 2;
	}

	for(int i = 0; i < n; i++){
		if(good[arr[i]] == 0){good[arr[i]] = 1; arr[i] = -1;}
	}

	// for(int i = 1; i <= n; i++) cout << good[i] << " "; cout << endl;
	// for(auto x: arr) cout << x << " "; cout << endl;

	for(int i = 0; i < n; i++){
		while(arr[i] > 0){
			arr[i] /= 2;
			if(good[arr[i]] == 0 & arr[i] != 0){
				good[arr[i]] = 1;
				arr[i] = -1;
				break;
			}
		}
	}

	for(auto x: arr){
		if(x != -1){cout << "NO\n"; return;}
	}

	cout << "YES\n";

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
