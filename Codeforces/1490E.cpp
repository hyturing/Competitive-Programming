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

	vector<pair<ll,int>> a(n);
	ll sum[n];

	for(int i = 1; i <= n; i++){
		cin >> a[i-1].first;
		a[i-1].second = i;
	}

	sort(a.begin(), a.end());

	for(int i = 0; i < n; i++){
		if(i==0){sum[0] = a[0].first; continue;}
		sum[i] = sum[i-1] + a[i].first;
	}

	int cnt = 1;
	vector<int> ans;
	ans.push_back(a[n-1].second);

	for(int i = n-1; i > 0; i--){
		if(sum[i-1] >= a[i].first){cnt++; ans.push_back(a[i-1].second);}
		else break;
	}

	cout << cnt << "\n";

	sort(ans.begin(), ans.end());
	for(auto x: ans) cout << x << " "; cout << "\n";

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
