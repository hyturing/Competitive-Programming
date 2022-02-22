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

	long long arr[n], cnt = 0;
	for(auto &x: arr) cin >> x;

	for(int i = 1; i < n-1; i++){
		if(arr[i] > arr[i-1] & arr[i] > arr[i+1]){
			if(arr[i] <= arr[i+2] & i < n-2) arr[i+1] = arr[i+2];
			else if(arr[i] >= arr[i+2] & i < n-2) arr[i+1] = arr[i];
			else arr[i] = arr[i-1];
			cnt++;
		}
	}

	cout << cnt << "\n";
	for(auto x: arr) cout << x << " ";
	cout << "\n";
	
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
