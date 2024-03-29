/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	int n;
	cin >> n;

	vector<pair<int,ll>> a(n);
	for(auto &x: a){
		cin >> x.first >> x.second;
	}

	int cur = a[0].first;

	int cnt=2;
	for(int i=1; i<n-1; i++){
		if(a[i].first-a[i].second > cur){cnt++; cur = a[i].first;}
		else if(a[i].first+a[i].second < a[i+1].first){cur = a[i].first+a[i].second; cnt++;}
		else cur = a[i].first;
	}

	

	if(n < 3) cout << n;
	else cout << cnt;

	return;
}

int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int tc = 1;
	// cin >> tc;
	for(int i = 1; i <= tc; i++){
		// cout << "Case #" << i << ": ";
		solve();
	}

	return 0;
}
