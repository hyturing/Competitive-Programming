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
	
	int n;
	cin >> n;

	int a[n];
	bool ok1 = false, ok2 = false;
	for(auto &x: a){
		cin >> x;
		if(x == 0) ok1 = true;
		if(x == 1) ok2 = true;
	}

	if(ok1 & ok2){cout << "NO\n"; return;}

	if(ok2){
		sort(a, a+n);
		for(int i = 1; i < n; i++){
			if(a[i]-a[i-1] == 1){
				cout << "NO\n";
				return;
			}
		}

		cout << "YES\n";
		return;
	}

	cout << "YES\n";

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
