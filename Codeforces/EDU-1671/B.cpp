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

	int arr[n];

	for (int i = 0; i < n; i++) cin >> arr[i];

	int cnt = 0, cnt2 = 0;

	for (int i = 0; i < n-1; i++) {
		if (arr[i+1]-arr[i] > 3) {
			cout << "NO\n";
			return;
		}

		if (arr[i+1]-arr[i] == 3) {
			cnt++;
		}

		if (arr[i+1]-arr[i] == 2) {
			cnt2++;
		}
	}

	if (cnt > 1 or cnt2 > 2) {
		cout << "NO\n";
		return;
	}

	if (cnt == 1 and cnt2 > 0) {
		cout << "NO\n";
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
