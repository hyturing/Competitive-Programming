/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  M = 1e9+7;
const ll MM = 998244353;
const int N = 1e5+5;

void solve(){

	// code here
	
	int n, m;
	cin >> n >> m;

	set<int> s;

	for(int i = 0; i < m; i++){
		int a, b, c;
		cin >> a >> b >> c;
		s.insert(b);
	}

	int root;

	for(int i = 1; i < n+1; i++){
		if(s.find(i) == s.end()){
			root = i;
			break;
		}
	}

	for(int i = 1; i < n+1; i++){
		if(i == root) continue;
		cout << i << " " << root << "\n";
	}

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
