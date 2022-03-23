/**
 *	Author: hyturing
 *	Created: 22 Mar 2022 20:33:08 IST
**/

#include <bits/stdc++.h>
using namespace std; 

#define int long long
const int  MOD = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const int INF = 1e18;

void solve(){

	// code here
	
	int n, b, x, y;
	cin >> n >> b >> x >> y;

	int a[n+1] = {0}, ans = 0;

	for(int i = 1; i < n+1; i++){
		if(a[i-1]+x <= b) a[i] = a[i-1]+x, ans += a[i];
		else{
			a[i] = a[i-1]-y, ans += a[i];
		}
	}

	cout << ans << "\n";

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
