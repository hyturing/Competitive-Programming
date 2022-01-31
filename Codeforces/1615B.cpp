/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  M = 1e9+7;
const ll MM = 998244353;
const int N = 1e5+5;

// vector<pair<int,int>> arr[200001];
int arr[200001][20];

void pre(){
	for(int i = 0; i < 200001; i++){
		for(int j = 0; j < 20; j++){
			arr[i][j] = 0;
			// arr[i][j].first = 0, arr[i][j].second = 0;;
		}
	}

	for(int i = 1; i <= 200000; i++){
		int j = 0, x = i;

		while(x > 0){
			arr[i][j] = arr[i-1][j]+x%2;
			j++;
			x = x/2;
		}
	}

	// for(int i = 1; i <= 10; i++){
		// for(int j = 0; j < 20; j++) cout << arr[i][j]; cout << "\n";
	// }


}

void solve(){

	// code here
	
	int l, r;
	cin >> l >> r;

	int mx = -1;

	for(int j = 0; j < 20; j++){
		mx = max(mx,arr[r][j]-arr[l-1][j]);
		// cout << mx << " ";
	}

	// cout << endl;

	cout << r-l+1-mx << "\n";

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

	pre();

	int tc = 1;
	cin >> tc;
	for(int i = 1; i <= tc; i++){
		// cout << "Case #" << i << ": ";
		solve();
	}

	return 0;
}
