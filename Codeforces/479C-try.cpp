/* hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define endl "\n"
#define ll long long
const ll  MOD = 1e9+7;

void solve(){
	int n;
	cin >> n;

	vector<pair<ll,ll>> v;

	for(int i=0; i<n; i++){
		ll a ,b;
		cin >> a >> b;
		v.push_back({a,b}); 
	}

	sort(v.begin(), v.end());

	int cnt(0);

	for(int i=1; i<n; i++){
		if(v[i].second >= v[i-1].second) cnt++;
	}

	if(cnt==n-1) cout << v[n-1].second;
	else cout << v[n-1].first;
		
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
