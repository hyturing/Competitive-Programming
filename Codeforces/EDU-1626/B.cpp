/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  M = 1e9+7;
const ll MM = 998244353;
const int N = 1e5+5;

void solve(){

	// code here
	
	string s;
	cin >> s;

	int n = s.size();

	int a = -1, b = -1;

	for(int i = 0; i < n-1; i++){
		if((int)(s[i]-'0') + (int)(s[i+1]-'0') > 9) a = i, b = i+1;
	}

	if(a == -1 & b == -1){
		cout << (int)(s[0]-'0')+(int)(s[1]-'0');
		for(int i = 2; i < n; i++) cout << s[i];
		cout << "\n";
		return;
	}

	for(int i = 0; i < a; i++) cout << s[i];
	cout << (int)(s[a]-'0')+(int)(s[b]-'0');

	for(int i = b+1; i < n; i++) cout << s[i]; cout << "\n";

	return;
}

/* 
	-> Read the problem statement carefully and clearly.

	-> Think Brute Force first.
	
	-> While practice if WA think first don't see test cases.
	
	-> If code too long logic maybe incorrect. 
*/

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
