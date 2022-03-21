/**
 *	Author: hyturing
 *	Created: 20 Mar 2022 10:54:32 IST
**/

#include <bits/stdc++.h>
using namespace std; 

#define int long long
const int  M = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;

void solve(){

	// code here
	
	string s;
	cin >> s;

	int num = 0;

	for(auto x: s) num += (x-'0');

	num %= 9, num = 9-num;

	if(num == 9) num = 0;

	int n = s.size();
	bool ok = true;

	if(s == "9"){cout << "90\n"; return;}

	for(int i = 0; i < n; i++){
		if(i == 0 & num == 0){cout << s[i]; continue;}
		if((s[i]-'0') > num & ok) ok = false, cout << num;
		cout << s[i];
		if(i == n-1 & ok) cout << num;
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
		cout << "Case #" << i << ": ";
		solve();
	}

	return 0;
}
