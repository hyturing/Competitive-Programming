/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	
	ll arr[7];
	for(auto &x: arr) cin >> x;

	vector<ll> a;
	for(int i = 0; i < 6; i++){
		a.push_back(arr[6]-arr[i]);
	}

	for(int i = 0; i < 6; i++){
		for(int j = 1; j < 6; j++){
			for(int k = 2; k < 6; k++){
				if(arr[i]+arr[j]+arr[k] == arr[6]){cout << arr[i] << " " << arr[j] << " " << arr[k] << "\n"; return;}
			}
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
