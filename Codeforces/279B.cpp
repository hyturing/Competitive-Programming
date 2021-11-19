/* hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define endl "\n"
#define ll long long
const ll  MOD = 1e9+7;

void solve(){
	ll n, t;
	cin >> n >> t;

	ll a[n];
	for(auto &c: a) cin >> c;
	int sum = 0, j = 0, ans = 0;
	for(int i = 0; i < n; i++){
		sum += a[i];
		while(sum > t){
			sum -= a[j];
			j++;
		}
		ans = max(ans, i-j+1);
	}

	cout << ans;
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
