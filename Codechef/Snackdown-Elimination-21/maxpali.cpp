/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	int n;
	cin >> n;

	if(n==2){cout << "ab\n"; return;}
	if(n==3){cout << "bab\n"; return;}

	if(n&1){
		for(int i = 0; i < n/2; i++){
			if(i&1) cout << 'a';
			else cout << 'b';
		}
		cout << 'b';
		for(int i = n/2+1; i < n; i++){
			if(i&1) cout << 'a';
			else cout << 'b';
		}
	}
	else{
		for(int i = 0; i < n/2; i++){
			if(i&1) cout << 'a';
			else cout << 'b';
		}
		for(int i = n/2; i < n; i++){
			if(i&1) cout << 'b';
			else cout << 'a';
		}
	}

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
