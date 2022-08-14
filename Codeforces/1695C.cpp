/**
 *	Author: hyturing
 *	Created: 26 Jun 2022 21:22:41 IST
**/

#include <bits/stdc++.h>
using namespace std; 

const int  MOD = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const long long INF = 1e18;
int n;
int m;
vector<vector<int>> arr;
bool ok;

// void path(int i, int j, int sum) {
// 	if (ok) return;

// 	if (i == n-1 and j == m-1) {
// 		sum += arr[i][j];
// 		if (sum == 0) {
// 			ok = true;
// 		}
// 		return;
// 	}

// 	if (i == n-1) {
// 		path(i, j+1, sum+arr[i][j]);
// 	}
// 	else if(j == m-1) {
// 		path(i+1, j, sum+arr[i][j]);
// 	}
// 	else {
// 		path(i, j+1, sum+arr[i][j]);
// 		path(i+1, j, sum+arr[i][j]);
// 	}
// }

void solve() {

	// code here
	
	cin >> n >> m;

	arr = vector<vector<int>> (n, vector<int> (m));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}

	if ((n+m)%2 == 0) {
		cout << "NO\n";
		return;
	} 

	int maxn[n][m], minn[n][m];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (i == 0 and j == 0) {
				maxn[i][j] = minn[i][j] = arr[i][j];
				continue;
			}

			if (i == 0) {
				maxn[i][j] = arr[i][j]+ maxn[i][j-1];
				minn[i][j] = arr[i][j] + minn[i][j-1];
				continue;
			}

			if (j == 0) {
				maxn[i][j] = arr[i][j]+ maxn[i-1][j];
				minn[i][j] = arr[i][j] + minn[i-1][j];
				continue;
			}

			maxn[i][j] = arr[i][j] + max(maxn[i-1][j], maxn[i][j-1]);
			minn[i][j] = arr[i][j] + min(minn[i-1][j], minn[i][j-1]);
		}
	}

	if (maxn[n-1][m-1] < 0 or minn[n-1][m-1] > 0) {
		cout << "NO\n";
	}
	else {
		cout << "YES\n";
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
