/**
 *	Author: hyturing
 *	Created: 25 May 2022 23:23:35 IST
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

	vector<int> a(n);

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	if (n&1) {
		cout << "NO\n";
		return;
	}
	else {
		sort(a.begin(), a.end());

		vector<int> b(n);

		int j = 0;

		for (int i = 0; i < n/2; i++) {
			b[j] = a[i];
			j += 2;
		}

		j = 1;

		for (int i = n/2; i < n; i++) {
			b[j] = a[i];
			j += 2;
		}

		// for (auto x: b) cout << x << " "; cout << "\n";

		for (int i = 0; i < n; i++) {
			 if (i == 0) {
			 	if (b[i] >= b[i+1]) {
			 		cout << "NO\n";
			 		return;
			 	}
			 	continue;
			 }

			 if (i == n-1) {
			 	if (b[i] <= b[i-1]) {
			 		cout << "NO\n";
			 		return;
			 	}
			 	continue;
			 }

			 if ((b[i] > b[i+1] and b[i] > b[i-1]) or (b[i] < b[i+1] and b[i] < b[i-1])) {
			 	continue;
			 }
			 else {
			 	cout << "NO\n";
			 	return;
			 }
		}

		cout << "Yes\n";
		for (auto x: b) cout << x << " "; cout << "\n";
	}

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
