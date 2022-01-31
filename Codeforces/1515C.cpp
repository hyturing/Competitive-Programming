/* Author: hyturing - Hemant Kumar Yadav */
// Read the problem statement carefully and clearly.
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	
	int n, m, x;
	cin >> n >> m >> x;
	vector<pair<int,pair<int,int>>> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i].first;
		a[i].second.second = i;
	}
	sort(a.begin(), a.end());
	int cnt = 0;
	for(int i = 0; i < n; i++){
		if(cnt == m) cnt = 0;
		a[i].second.first = ++cnt;
	}

	vector<int> h(m);

	for(auto x: a){
		h[x.second.first-1] += x.first;
	}
	
	sort(h.begin(), h.end());

	vector<int> ans(n);

	if(h[m-1]-h[0] > x){
		cout << "NO\n";
	}
	else{
		cout << "YES\n";
		for(auto x: a){
			ans[x.second.second] = x.second.first;
		}

		for(auto x: ans) cout << x << " ";
		cout << "\n";
	}
		
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
