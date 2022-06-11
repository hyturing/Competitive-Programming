/**
 *	Author: hyturing
 *	Created: 02 Jun 2022 23:15:31 IST
**/

#include <bits/stdc++.h>
using namespace std; 

#define int long long
const int  MOD = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const int INF = 1e18;

int maxSum(vector<int> v) {
	int n = v.size();

	int currSum = 0, maxSum = 0;

	for (int i = 0; i < n; i++) {
		if (currSum + v[i] < 0) currSum = 0;
		else currSum += v[i];
		maxSum = max(maxSum, currSum);
	}

	return maxSum;
}

void solve() {

	// code here
	
	int n;
	cin >> n;

	vector<int> a(n+1, 0);
	for (int i = 1; i <= n; i++) cin >> a[i];

	vector<int> even, odd;

	int ans = 0;

	for (int i = 1; i <= n; i++) {
		if (i&1) {
			ans += a[i];
		}

	}

	for (int i = 1; i < n ; i += 2) {
		odd.push_back(a[i+1]-a[i]);
	}

	for (int i = 2; i < n; i += 2) {
		even.push_back(a[i]-a[i+1]);
	}

	int increment = max(maxSum(odd), maxSum(even));

	cout << max(ans, ans+increment) << "\n";


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
