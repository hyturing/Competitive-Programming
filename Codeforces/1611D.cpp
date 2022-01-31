/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	
	int n;
	cin >> n;

	int b[n], p[n];

	for(auto &x: b) cin >> x;
	for(auto &x: p) cin >> x;

	map<int,int> m;

	for(int i = 0; i < n; i++){
		m[p[i]] = i+1;
	}

	for(int i = 0; i < n; i++){
		if(m[b[i]] > m[i+1]){
			cout << -1 << "\n";
			return;
		}
	}

	for(int i = 0; i < n; i++){
		cout << abs(m[b[i]]-m[i+1]) << " ";
	}

	cout << "\n";

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
