/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	
	int n;
	cin >> n;
	vector<pair<ll, pair<ll,int>>> a(n), b(n);
	for(int i = 0; i < n; i++){
		ll x;
		cin >> x;
		a[i].first = x;
		b[i].second.first = x;
	}

	for(int i = 0; i < n; i++){
		ll x;
		cin >> x;
		a[i].second.first = x; a[i].second.second = i;
		b[i].first = x; b[i].second.second = i;

	}

	sort(a.begin(), a.end());
	sort(b.begin(), b.begin());

	int ans[n]={0};
	bool ok1 = false, ok2 = false;
	for(int i = 0; i < n; i++){
		if(ok1) ans[a[i].second.second] = 1;
		else{
			if(a[i].second.first == b[n-1].first){ok1 = true; ans[a[i].second.second] = 1;}
		}
		if(ok2) ans[b[i].second.second] = 1;
		else{
			if(b[i].first >= a[n-1].second.first){ok2 = true; ans[b[i].second.second] = 1;}
		}
	}

	for(auto &x: ans) cout << x; cout << endl;

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
