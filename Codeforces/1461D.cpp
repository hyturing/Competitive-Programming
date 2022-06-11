/**
 *	Author: hyturing
 *	Created: 05 Jun 2022 23:16:34 IST
**/

#include <bits/stdc++.h>
using namespace std; 

#define int long long
const int  MOD = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const int INF = 1e18;

int a[N];
set<int> s;

void divide(int i, int j) {
	if (i == j) {
		s.insert(a[i]);
		return;
	}

	int mid = (a[i]+a[j])/2;

	int sum = 0, r;

	bool ok = true;

	for (int k = i; k < j; k++) {
		if (a[k] != a[k+1]) ok = false;
	}

	if (ok) {
		for (int k = i; k <= j; k++) {
			sum += a[k];
		}

		s.insert(sum);
		return;
	}

	for (int k = i; k <= j; k++) {
		if (a[k] <= mid) sum += a[k];
		else {
			r = k-1;
			break;
		}
	}

	s.insert(sum); sum = 0;

	for (int k = r+1; k <= j; k++) {
		sum += a[k];
	}

	s.insert(sum);

	divide(i, r); divide(r+1, j);
}

void solve() {

	// code here
	s.clear();

	int n, q;
	cin >> n >> q;
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		sum += a[i];
	}
	s.insert(sum);
	sort(a+1, a+n+1);

	divide(1, n);

	// for (auto x: s) cout << x << " "; cout << endl;
	while (q--) {
		int t;
		cin >> t;

		if (s.find(t) == s.end()) cout << "No\n";
		else cout << "Yes\n";
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
