/**
 *	Author: hyturing
 *	Created: 30 Mar 2022 07:43:10 IST
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
	
	string s;
	int k;
	cin >> s >> k;

	int n = s.size(), sum = 0;

	for (auto x: s) sum += x-'0';

	int carry = 0, ans;
	if (s[n-1] == '0') carry = 0, ans = 0;
	else {
		int m = ('9'-s[n-1]);
		m++;
		ans = m;
		carry++;
		sum -= m;
	}
	for (int i = n-2; i > 0; i--) {
		if (sum <= k) break;

		if (s[i] == '9') {
			sum -= s[i]-'1';
			continue;
		}

		if(s[i-1] != '9') s[i-1]++;
		sum++;
		sum -= s[i]-'0';

		int m = 1;
		for (int j = 0; j < n-i-1; j++) m *= 10;
		ans += ((int)s[i]-'0')*m;
	}

	cout << ans << "\n";

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
