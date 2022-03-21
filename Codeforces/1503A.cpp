/**
 *	Author: hyturing
 *	Created: 19 Mar 2022 23:54:48 IST
**/

#include <bits/stdc++.h>
using namespace std; 

#define int long long
const int  M = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;

void solve(){

	// code here
	
	int n;
	cin >> n;

	string s;
	cin >> s;

	int one = 0;
	for(auto x: s) one += (x == '1' ? 1 : 0);

	if(s[0] == '0' | s[n-1] == '0' | (one&1)){
		cout << "NO\n";
		return;
	}

	vector<char> a(n), b(n);

	one /= 2;

	bool ok = true;

	for(int i = 0; i < n; i++){
		if(s[i] == '1'){
			if(one > 0){
				a[i] = b[i] = '(';
				one--;
			}
			else a[i] = b[i] = ')';
		}
		else{
			if(ok){
				a[i] = '(', b[i] = ')';
				ok = false;
			}
			else{
				a[i] = ')', b[i] = '(';
				ok = true;
			}
		}
	}

	cout << "YES\n";

	for(auto x: a) cout << x; cout << "\n";
	for(auto x: b) cout << x; cout << "\n";

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
