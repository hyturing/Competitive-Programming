/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here

	string s;
	cin >> s;

	int n = s.size();

	if((s[n-1]-'0')%2 == 0) cout << 0 << endl;
	else{
		if((s[0]-'0')%2 == 0) cout << 1 << endl;
		else{
			int cnt(0);
			for(int i = 0; i < n; i++){
				if((s[i]-'0')%2 == 1) cnt++; 
			}
			if(cnt == n) cout << -1 << endl;
			else cout << 2 << endl;
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
