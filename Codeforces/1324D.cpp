/* hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define endl "\n"
#define ll long long
const ll  MOD = 1e9+7;

void solve(){
	int n;
	cin >> n;

	ll a[n], b[n];
	for(auto &c: a) cin >> c;
	for(auto &c: b) cin >> c;

	vector<pair<ll,ll>> v;

	for(int i = 0; i < n; i++) v.push_back({b[i]-a[i], a[i]-b[i]});

	sort(v.begin(), v.end());

	vector<ll> bs;

	for(int i = 0; i < n; i++) bs.push_back(v[i].first);

	ll ans(0);

	// for(auto c: bs) cout << c << " "; cout << endl;
	// for(auto c: v) cout << c.second << " "; cout << endl;

	for(int i = 0; i < n; i++){
		auto it = lower_bound(bs.begin(), bs.end(), v[i].second);
		
		ll k = it-bs.begin();
		// cout << *it << " " << k << endl;
		if(k <= i) continue;
		ans += k-i-1;
	}

	cout << ans << endl;	
	
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
