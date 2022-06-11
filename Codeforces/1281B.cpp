/**
 *	Author: hyturing
 *	Created: 05 Jun 2022 20:54:30 IST
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
	
	string s, c;
	cin >> s >> c;

	int n = s.size();
	string t = s;

	sort(t.begin(), t.end());

	int j = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] != t[i]) {
			j = i;
			break;
		}
	}

	int k;
	char mi;

	for (int i = j; i < n; i++) {
		if (i == j) {
			k = i;
			mi = s[k];
		}
		else {
			if (s[i] <= mi) {
				k = i;
				mi = s[i];
			}
		}
	}

	swap(s[j], s[k]);

	if (s < c) {
		cout << s << "\n";
	}
	else {
		cout << "---" << "\n";
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
