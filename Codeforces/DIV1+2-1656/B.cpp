/**
 *	Author: hyturing
 *	Created: 
**/

#include <bits/stdc++.h>
using namespace std; 

#define int long long
const int  MOD = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const int INF = 1e18;

void solve() {

	// code here
	
	int n, k;
	cin >> n >> k;

	int a[n];
	for(auto &x: a) cin >> x;

	sort(a, a+n);

	int i = 0, j = 1;

	while(i < n && j < n){
		if(i!=j && (a[j]-a[i] == k || a[i]-a[j] == k)){
			cout << "YES\n";
			return;
		}
		if(a[j]-a[i] < k) j++;
		else i++;
	}

	cout << "NO\n";

	return;
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int tc = 1;
	cin >> tc;
	
	for (int i = 1; i <= tc; i++) {
		// cout << "Case #" << i << ": ";
		solve();
	}

	return 0;
}
