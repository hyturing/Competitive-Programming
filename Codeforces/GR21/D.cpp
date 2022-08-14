/**
 *	Author: hyturing
 *	Created: 
**/

#include <bits/stdc++.h>
using namespace std; 

const int  MOD = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const long long INF = 1e18;

void solve() {

	// code here
	
	int n; cin >> n;

	int a[n+1];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	
	int pos[n+1];
	for (int i = 1; i <= n; i++) {
		pos[a[i]] = i;
	}

	int pmx[n+1], pmn[n+1];

	for (int i = 1; i <= n; i++) {
		if (i == 1) {
			pmx[i] = a[i];
			pmn[i] = a[i];
			continue;
		}

		pmx[i] = max(pmx[i-1], a[i]);
		pmn[i] = min(pmn[i-1], a[i]);
	}

	int smx[n+1], smn[n+1];

	for (int i = n; i >= 0; i--) {
		if (i == n) {
			smx[i] = a[i];
			smn[i] = a[i];
			continue;
		}

		smx[i] = max(smx[i+1], a[i]);
		smn[i] = min(smn[i+1], a[i]);
	}

	int ans = 0;

	bool ok = true;

	int i = pos[1];

	while (i != 1) {
		ans++;
		if (ok) {
			int x = pmx[i-1];
			i = pos[x];
			ok = false;
		}
		else {
			int x = pmn[i-1];
			i = pos[x];
			ok = true;
		}
	}	

	i = pos[1];
	ok = true;

	while (i != n) {
		ans++;

		if (ok) {
			int x = smx[i+1];
			i = pos[x];
			ok = false;
		}
		else {
			int x = smn[i+1];
			i = pos[x];
			ok = true;
		}		
	}

	cout << ans << "\n";

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
