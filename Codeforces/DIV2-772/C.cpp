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

	if(arr[n-2] > arr[n-1]){
		cout << -1 << "\n";
	}
	else{

		if(arr[n-1] < 0){
			for(int i = 0; i < n-1; i++){
				if(arr[i] > arr[i+1]){
					cout << -1 << "\n";
					return;
				}
			}

			cout << 0 << "\n";
			return;
		}

		cout << n-2 << "\n";
		for(int i = 1; i <= n-2; i++){
			cout << i << " " << n-1 << " " << n << "\n";
		}
	}

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
