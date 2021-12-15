/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	
	int n;
	cin >> n;
	int a[n];
	for(auto &x: a) cin >> x;

	int ans = 1;
	for(int i = 0; i < n; i++){
		if(i == 0){if(a[i] == 1) ans++;}
		else{
			if(a[i] == 1){
				if(a[i-1] == 0) ans++;
				else ans += 5;
			}
			else{
				if(a[i-1] == 0){
					cout << -1 << "\n";
					return;
				}
			}
		}
	}

	cout << ans << "\n";

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
