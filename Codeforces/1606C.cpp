/* hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 
#define endl "\n"
#define ll long long
const ll  MOD = 1e9+7;

// rethink and implement once more

void solve(){
		
	// min sum that can be formed using k+1 notes but can't be formed using k notes

	ll n, k;
	cin >> n >> k;
	ll a[n];
	for(ll &c: a){
		cin >> c;
		ll val = 1;
		while(c--) val*=10;
		c=val;
	}
	k++;

	ll ans=0;

	for(int i = 0; i < n; i++){
		ll cnt = k;
		if(i<n-1) cnt = min(cnt, a[i+1]/a[i]-1);
		ans += a[i]*cnt;
		k-=cnt;
	}

	cout << ans << endl;
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
