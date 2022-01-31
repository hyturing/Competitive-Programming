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

	long long k[n], h[n];

	for(auto &x: k) cin >> x;
	for(auto &x: h) cin >> x;

	set<pair<long long, long long>> ans;
	vector<pair<long long, long long>> v;

	for(int i = 0; i < n; i++){
		v.push_back({k[i]-h[i]+1, k[i]});
	}

	sort(v.begin(), v.end());
	long long a = v[0].first, b = v[0].second;

	for(int i = 1; i < n; i++){
		if(v[i].first <= b){
			if(v[i].second > b) b = v[i].second;
		}
		else if(v[i].second < b){
			continue;
		}
		else{
			ans.insert({a, b});
			a = v[i].first, b = v[i].second;
		}

		if(i == n-1) ans.insert({a, b});
	}

	if(ans.find({a,b}) == ans.end()) ans.insert({a,b});

	long long res = 0;

	for(auto x: ans){
		// cout << x.first << " " << x.second << endl;
		long long m = x.second-x.first+1;
		res += (m*m+m)/2;
	}

	cout << res << "\n";

	// cout << endl;

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
