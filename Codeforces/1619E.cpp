/**
 *	Author: hyturing
 *	Created: 29 May 2022 12:45:53 IST
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

	vector<int> a(n), cnt(n+1, 0), ans(n+1, -1);
	for (auto &x: a) {
		cin >> x;
		cnt[x]++;
	}

	stack<int> st;
	int sum = 0;

	sort(a.begin(), a.end());

	for (int i = 0; i <= n; i++) {
		if (i > 0 and cnt[i-1] == 0) {
			if (st.empty()) {
				break;
			}

			int j = st.top();
			st.pop();
			sum += i - 1 - j;
		}

		ans[i] = sum + cnt[i];

		while (i > 0 and cnt[i-1] > 1) {
			st.push(i - 1);
			cnt[i-1]--;
		}
	}

	for (auto x: ans) cout << x << " ";
	cout << "\n";

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
