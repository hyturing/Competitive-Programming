/**
 *	Author: hyturing
 *	Created: 20 May 2022 14:13:47 IST
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
	
	int n, m;
	cin >> n >> m;

	int arr[n][m], sor[n][m];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
			sor[i][j] = arr[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		sort(arr[i], arr[i]+m);
	}


	int col[m] = {0};

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] != sor[i][j]) col[j]++;
		}
	}
	
	int cnt = 0;

	for (auto x: col) if (x > 0) cnt++;

	if (cnt == 0) {
		cout << 1 << " "  << 1 << "\n";
		return;
	}

	if (cnt != 2) {
		cout << -1 << "\n";
		return;
	}

	int a[2] = {0}, k = 0;

	for (int i = 0; i < m; i++) {
		if (col[i] > 0) {
			a[k] = i;
			k++;
		}
	}	

	for (int i = 0; i < n; i++) swap(arr[i][a[0]], arr[i][a[1]]);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] != sor[i][j]) {
				cout << -1 << "\n";
				return;
			}
		}
	}

	cout << a[0]+1 << " " << a[1]+1 << "\n";

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
