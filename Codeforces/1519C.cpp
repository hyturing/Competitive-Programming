/* Author: hyturing - Hemant Kumar Yadav */
// Read the problem statement carefully and clearly.
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	
	int n;
	cin >> n;

	vector<pair<int,ll>> v(n);

	for(int i = 0; i < n; i++) cin >> v[i].first;
	for(int i = 0; i < n; i++) cin >> v[i].second;

	sort(v.begin(), v.end());
	reverse(v.begin(), v.end());

	for(int i = 1; i < n; i++){
		if(v[i].first == v[i-1].first) v[i].second += v[i-1].second;
	}

	map<int,vector<ll>> m;

	for(int i = 0; i < n; i++) m[v[i].first].push_back(v[i].second);

	vector<ll> ans(n+1);

	for(auto x: m){
		vector<ll> sum = x.second;
		int sz = sum.size();

		for(int i = 1; i <= sz; i++){
			int y = sz-sz%i;
			ans[i] += sum[y-1];
		}
	}

	bool ok = true;
	for(auto x: ans){
		if(ok){ok = false; continue;}
		cout << x << " ";
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
		// cout << "Case #" << i << ": ";
		solve();
	}

	return 0;
}
