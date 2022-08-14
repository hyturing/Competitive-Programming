/**
 *	Author: hyturing
 *	Created: 16 Jun 2022 08:55:25 IST
**/

#include <bits/stdc++.h>
using namespace std; 

#define ll long long
const int  MOD = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const ll INF = 1e18;

void solve() {

	// code here
	
	int n;
	cin >> n;

	string s, t;
	cin >> s >> t;

	int j = 0;

	for (int i = 0; i < n; i++) {
		if (s[i] == 'b') continue;
		else {
			
			while (t[j] == 'b') {
			 	j++;
			 	continue;
			}
			if (s[i] != t[j] or (s[i] == 'a' and i > j) or (s[i] == 'c' and i < j)) {
				cout << "NO\n";
				return;
			}
			j++;
		}	
	}

	sort(s.begin(), s.end());
	sort(t.begin(), t.end());

	if (s == t) {
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
	}


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
