/**
 *	Author: hyturing
 *	Created: 21 Jun 2022 03:36:07 IST
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
	
	int n, m; cin >> n >> m;

	vector<vector<char>> arr(n, vector<char>(m));

	vector<array<int, 3>> v;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];

			if (arr[i][j] == 'B') {
				v.push_back({i+j, i, j});
			}
		}
	}

	sort(v.begin(), v.end());

	int len = v.size();

	pair<int,int> a = {v[0][1],v[0][2]}, b = {v[len-1][1], v[len-1][2]};

	for (int i = 0; i < len; i++) {
		v[i][0] = v[i][1] - v[i][2];
	}

	sort(v.begin(), v.end());
	
	pair<int,int> c = {v[0][1],v[0][2]}, d = {v[len-1][1], v[len-1][2]};	

	pair<int,int> ans;
	int minn = INT_MAX;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int maxn = max(abs(i-a.first)+abs(j-a.second), abs(i-b.first)+abs(j-b.second));
			maxn = max(maxn, max(abs(i-c.first)+abs(j-c.second), abs(i-d.first)+abs(j-d.second)));
			if (maxn < minn) {
				minn = maxn;
				ans = {i+1,j+1};
			}
		}
	}

	cout << ans.first << " " << ans.second << "\n";

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
