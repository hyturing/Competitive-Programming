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

	vector<ll> r, b;
	vector<pair<ll,char>> v(n);

	for(auto &x: v) cin >> x.first;
	for(auto &x: v) cin >> x.second;

	for(int i = 0; i < n; i++){
		(v[i].second == 'R' ? r : b).push_back(v[i].first);
	}

	sort(b.begin(), b.end());
	sort(r.rbegin(), r.rend());

	bool ok = true;

	for(int i = 0; i < b.size(); i++){
		if(b[i] < i+1) ok = false;
	}

	for(int i = 0; i < r.size(); i++){
		if(r[i] > n-i) ok = false;
	}

	cout << (ok ? "YES\n" : "NO\n");

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
