/**
 *	Author: hyturing
 *	Created: 27 Jun 2022 22:02:43 IST
**/

#include <bits/stdc++.h>
using namespace std; 

const int  MOD = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const long long INF = 1e18;

void solve() {

	// code here
	
	int n, m; cin >> n >> m;

	vector<int> a(n+1);
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	map<int,int> s;

	auto add = [&](int index, int val) {
		s[index] = val;

		auto it = s.find(index);

		if (it != s.begin() and prev(it)->second <= val) {
			s.erase(it);
			return;
		} 

		while (next(it) != s.end() and next(it)->second >= val) {
			s.erase(next(it));
		}

		return;
	};

	for (int i = 1; i <= n; i++) {
		add(i, a[i]);
	}

	while (m--) {
		int index, val; cin >> index >> val;

		a[index] -= val;

		add(index, a[index]);

		cout << s.size() << " ";
	}

	cout << "\n";

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
