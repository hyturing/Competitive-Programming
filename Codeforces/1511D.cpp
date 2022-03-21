/**
 *	Author: hyturing
 *	Created: 19 Mar 2022 08:42:51 IST
**/

#include <bits/stdc++.h>
using namespace std; 

#define int long long
const int  M = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;

void solve(){

	// code here
	
	int n, k;
	cin >> n >> k;

	string s = "";

	for(int i = 0; i < k; i++){
		s += 'a'+i;
		for(int j = i+1; j < k; j++){
			s += ('a'+i), s += ('a'+j);
		}
	}

	while(s.size() < n) s += s;

	for(int i = 0; i < n; i++) cout << s[i];
	cout << "\n";

	return;
}

int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int tc = 1;
	// cin >> tc;
	for(int i = 1; i <= tc; i++){
		// cout << "Case #" << i << ": ";
		solve();
	}

	return 0;
}
