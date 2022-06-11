/**
 *	Author: hyturing
 *	Created: 10 Jun 2022 16:33:50 IST
**/

#include <bits/stdc++.h>
using namespace std; 

#define int long long
const int  MOD = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const int INF = 1e18;

int min_shift(string s) {
	string t = s;
	int cnt = 1;

	t = t.substr(1)+t.substr(0,1);
	while (t != s) {
		cnt++;
		t = t.substr(1)+t.substr(0,1);
	}

	return cnt;
}

int lcm(int a, int b) {
	return (a*b)/__gcd(a,b);
}

void solve() {

	// code here
	
	int n; cin >> n;
	vector<char> s(n+1);
	vector<int> p(n+1);
	for (int i = 1; i <= n; i++) cin >> s[i];
	for (int i = 1; i <= n; i++) cin >> p[i];

	vector<bool> ok(n+1, false);

	vector<vector<int>> v;

	for (int i = 1; i < n; i++) {

		if (ok[i]) continue;

		int j = i;
		vector<int> k ;
		while (true) {
			if (ok[j]) break;
			ok[j] = true; k.push_back(j);
			j = p[j];
		}

		v.push_back(k);
	}

	
	vector<string> shift;
	for (auto x: v) {
		string t = "";
		for (auto y: x) {
			t += s[y];
		}
		shift.push_back(t);
	}

	int ans = 1;

	for (int i = 0; i < shift.size(); i++) {
		ans = lcm(ans, min_shift(shift[i]));
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