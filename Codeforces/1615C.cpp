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

	string a, b;
	cin >> a >> b;

	if(a == b){
		cout << 0 << "\n";
		return;
	}

	int c1 = 0, c2 = 0, ans = INT_MAX, diff = 0;

	for(auto x: a) if(x == '1') c1++;
	for(auto x: b) if(x == '1') c2++;

	for(int i = 0; i < n; i++) if(a[i] != b[i]) diff++;

	if(c1 == c2){
		ans = min(ans, diff);
	}

	for(int i = 0; i < n; i++){
		if(a[i] == '1'){
			int newOne = n-c1+1;

			if(newOne == c2){
				int new_diff = n-diff;
				if(b[i] == '1'){
					new_diff--;
					ans = min(ans, new_diff+1);
				}
				else{
					new_diff++;
					ans = min(ans, new_diff+1);
				}

			}
		}
	}

	cout << (ans == INT_MAX ? -1 : ans) << "\n";
		
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
