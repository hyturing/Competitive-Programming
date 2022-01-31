/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  M = 1e9+7;
const ll MM = 998244353;
const int N = 1e5+5;

void solve(){

	// code here
	
	int n;
	cin >> n;

	int a[n];
	map<int,int> m;

	for(auto &x: a){
		cin >> x;
		m[x]++;
	}

	vector<int> v;

	for(auto x: m){
		v.push_back(x.second);
	}

	sort(v.begin(), v.end());

	int len = v.size(), ans = n;

	for(int i = 0; i < len; i++){
		ans = min(ans, n - v[i]*(len-i));
	}	

	cout << ans << "\n";

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
