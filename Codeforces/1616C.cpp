/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	
	int n;
	cin >> n;

	int arr[n];
	for(auto &x: arr) cin >> x;

	int mx = 0;

	for(int i = 0; i < n; i++){
		map<double,int> m;

		int a = arr[i];

		for(int j = i-1; j >= 0; j--){
			double d = (arr[j]-arr[i])/(double)(j-i);

			m[d]++;
		}

		for(int j = i+1; j < n; j++){
			double d = (arr[j]-arr[i])/(double)(j-i);

			m[d]++;
		}

		for(auto x: m){
			mx = max(mx, x.second);
		}	
	}

	cout << n-mx-1 << "\n";

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
