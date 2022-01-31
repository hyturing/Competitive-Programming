/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  M = 1e9+7;
const ll MM = 998244353;
const int N = 1e5+5;

void solve(){

	// code here
	
	string s, t;
	cin >> s >> t;

	int tLen = t.size(), sLen = s.size();

	if(tLen > sLen){
		cout << "NO\n";
		return;
	}

	// fixing the first appearance is important

	reverse(s.begin(), s.end()); reverse(t.begin(), t.end());

	int j = 0, cnt = 0;

	for(int i = 0; i < sLen; i++){
		if(s[i] == t[j] & cnt%2 == 0){
			cnt = 0;
			j++;
		}
		else{
			cnt++;
		}
	}

	if(j == tLen){
		cout << "YES\n";
		return;
	}

	cout << "NO\n";

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
