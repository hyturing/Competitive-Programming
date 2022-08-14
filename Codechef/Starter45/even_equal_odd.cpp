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
#define int long long

void solve() {

	// code here
	
	int n; cin >> n; n *= 2;
	int arr[n];

	int odd = 0;
	int even = 0;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i]&1) odd++;
		else even++;
	}		

	if (odd == even) {
		cout << 0 << "\n";
	}
	else if (odd > even) {
		cout << n/2 - even << "\n";
	}
	else {
		vector<int> v;
		int k = n/2 - odd;

		for (int i = 0; i < n; i++) {
			if (arr[i]%2 == 0) {
				int cnt = 0;
				while (arr[i]%2 == 0) {
					arr[i] /= 2;
					cnt++;
				}
				v.push_back(cnt);
			}
		}

		sort(v.begin(), v.end());

		int ans = 0;

		for (int i = 0; i < k; i++) ans += v[i];

		cout << ans << "\n";
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
