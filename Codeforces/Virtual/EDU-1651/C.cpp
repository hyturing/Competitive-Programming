/**
 *	Author: hyturing
 *	Created: 19 Mar 2022 18:37:36 IST
**/

#include <bits/stdc++.h>
using namespace std; 

#define int long long
const int  M = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const int INF = 1e18;

void solve(){

	// code here
	
	int n;
	cin >> n;

	int aa[n], bb[n];

	for(auto &x: aa) cin >> x;
	for(auto &x: bb) cin >> x;

	int a = INF, b = INF, c = INF, d = INF;

	for(int i = 0; i <= n-1; i++) a = min(a, abs(aa[0]-bb[i]));
	for(int i = 0; i <= n-1; i++) b = min(b, abs(bb[0]-aa[i]));
	for(int i = n-1; i >= 0; i--) c = min(c, abs(aa[n-1]-bb[i]));
	for(int i = n-1; i >= 0; i--) d = min(d, abs(bb[n-1]-aa[i]));

	int ans = min(abs(aa[0]-bb[0])+abs(aa[n-1]-bb[n-1]), abs(aa[0]-bb[n-1])+abs(aa[n-1]-bb[0]));

	// cout << a << " " << b << " " << c << " " << d << endl;

	ans = min(ans, abs(aa[0]-bb[0])+c+d);
	ans = min(ans, abs(aa[n-1]-bb[n-1])+a+b);
	ans = min(ans, abs(aa[0]-bb[n-1])+b+c);
	ans = min(ans, abs(aa[n-1]-bb[0])+a+d);
	ans = min(ans, a+b+c+d);

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