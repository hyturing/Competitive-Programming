/* Author: hyturing - Hemant Kumar Yadav */
// Read the problem statement carefully and clearly.
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	
	string s;
	cin >> s;

	if(s.size() < 3){cout << "YES\n"; return;}

	for(int i = 2; i < s.size(); i++){
		int a = s[i-2]-'A'%26, b = s[i-1]-'A', c = s[i]-'A';
		if((a+b)%26 != c){cout << "NO\n"; return;}
	}

	cout << "YES\n";

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
