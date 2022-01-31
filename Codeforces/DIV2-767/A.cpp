/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  M = 1e9+7;
const ll MM = 998244353;
const int N = 1e5+5;

void solve(){

	// code here
	
	int n, k;
	cin >> n >> k;

	vector<pair<int,int>> v(n);

	for(int i = 0; i < n; i++) cin >> v[i].first;
	for(int i = 0; i < n; i++) cin >> v[i].second;

	sort(v.begin(), v.end());

	for(int i = 0; i < n; i++){
		if(v[i].first > k){
			cout << k << "\n";
			return;
		}
		else{
			k += v[i].second;
		}
	}

	cout << k << "\n";

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
