/**
 *	Author: hyturing
 *	Created: 30 Apr 2022 18:23:42 IST
**/

#include <bits/stdc++.h>
using namespace std; 

#define int long long
const int  MOD = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const int INF = 1e18;

int ans;

void reduce (vector<int>& deg) {
	int len = deg.size();
	if (len == 0) return;

	int mx = deg[0], last = 0;

	for (int i = 0; i < len; i++) {
		if (mx == deg[i]) {
			last = i;
		}
		else break;
	}

	deg[last]--;

	for (int i = 0; i < len; i++) deg[i]--;

	ans++;

	while (!deg.empty() and deg.back() <= 0) deg.pop_back();

	reduce(deg);

}

void solve () {

	// code here
	
	int n;
	cin >> n;

	ans = 0;

	vector<int> deg(n+1);

	for (int i = 2; i <= n; i++) {
		int j;
		cin >> j;
		deg[j]++;
	}	

	sort(deg.rbegin(), deg.rend());

	while (!deg.empty() and deg.back() <= 0) deg.pop_back();

	deg.push_back(1);

	int len = deg.size();


	for (int i = 0; i < len; i++) {
		ans++;
		deg[i] = deg[i] - (len-i);
	}

	sort(deg.rbegin(), deg.rend());

	while (!deg.empty() and deg.back() <= 0) deg.pop_back();

	reduce(deg);
	
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
