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

	long long arr[n];

	for(auto &x: arr) cin >> x;

	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			long long x = arr[i]|arr[j];
			arr[i] = 0, arr[j] = x;
		}
	}

	long long sum = 0;
	for(auto x: arr) sum += x;

	cout << sum << "\n";

	return;
}

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
