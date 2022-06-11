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
	
	int n, m, k;
	cin >> n >> m >> k;

	string a, b;
	cin >> a >> b;

	string c = "";

	int i = 0, j = 0;
	int k1 = 0, k2 = 0;
	sort(a.begin(), a.end()); sort(b.begin(), b.end());

	while (i < n and j < m) {
		if (i == n or j == m) break;
		if (k1 == k) {
			c+= b[j];
			j++;
			k1 = 0;
			k2++;
			continue;
		}

		if (k2 == k) {
			c += a[i];
			i++;
			k2 = 0;
			k1++;
			continue;
		}

		if (a[i] < b[j]) {
			c += a[i];
			i++;
			k1++;
			k2 = 0;
		}
		else {
			c += b[j];
			j++;
			k2++;
			k1 = 0;
		}
	}

	cout << c << "\n";

	return;
}

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int tc = 1;
	cin >> tc;
	
	for (int i = 1; i <= tc; i++) {
		// cout << "Case #" << i << ": ";
		solve();
	}

	return 0;
}
