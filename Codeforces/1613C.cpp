/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  M = 1e9+7;
const ll MM = 998244353;
const int N = 1e5+5;

void solve(){

	// code here

	ll n, h;
	cin >> n >> h;

	ll a[n];
	for(auto &x: a) cin >> x;

	ll lo = 1, hi = 1e18+10;
	ll mid, ans = hi;
	while(lo < hi){
		mid = lo - (lo-hi)/2;
		ll sum = 0;

		for(int i = 1; i < n; i++){
			sum += min(mid,a[i]-a[i-1]);
		}
		sum += mid;

		if(sum < h) lo = mid+1;
		else{
			hi = mid;
			ans = mid;
		}
		
	}

	cout << ans << "\n";
	
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
