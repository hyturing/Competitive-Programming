/**
 *    Author: hyturing
 *    Created: 
**/

#include <bits/stdc++.h>
using namespace std; 

#define int long long
#define sz(x) ((int)(x).size())
#define all(x) x.begin(),x.end()
#define endl "\n"
#define pb push_back

const int  MOD = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const long long INF = 1e18;

void solve() {

    // code here
    
    int n; cin >> n;

    vector<int> v(n);
    for (auto &x: v) cin >> x;

    bool ok = true;
	int cnt = 0;
	vector<array<int, 3>> a, b;
	int prev = 0;
	for (int i = 0; i < n; i++) {
		if (i == 0) {
			cnt++;
			if (v[i] == -1) ok = false;
			continue;
		}

		if (v[i] == 1) {
			if (ok) {
				cnt++;
			}
			else {
				if (cnt > 0) b.push_back({cnt, prev, i-1});
				prev = i;
				cnt = 1;
				ok = true;
			}
		}
		else {
			if (ok) {
				if (cnt > 0) a.push_back({cnt, prev, i-1});
				prev = i;
				cnt = 1;
				ok = false;
			}
			else {
				cnt++;
			}
		}
	}

	if (cnt > 0) {
		if (ok) a.push_back({cnt, prev, n-1});
		else b.push_back({cnt, prev, n-1});
	}

	sort(all(a));
	sort(all(b));
	
	int l = a.size(), r = b.size();

	int i = 0, j = 0;

	vector<pair<int,int>> ans;

	while (i < l and j < r) {
		int s1 = a[i][2]-a[i][1]+1, s2 = b[j][2]-b[j][1]+1;

		if (s1%2 == s2%2) {
			ans.push_back({a[i][1], a[i][2]});
			ans.push_back({b[j][1], b[j][2]});
			i++, j++;
		}
		else if (s1%2 == 0) {
			ans.push_back({a[i][1], a[i][2]});
			i++;
		}
		else if (s2%2 == 0) {
			ans.push_back({b[j][1], b[j][2]});
			j++;
		}
	}

	while (i < l) {
		int s1 = a[i][2]-a[i][1]+1;
		if (s1&1) {
			cout << -1 << endl;
			return;
		}
		ans.push_back({a[i][1], a[i][2]});
		i++;
	}

	while (j < r) {
		int s2 = b[j][2]-b[j][1]+1;
		if (s2&1) {
			cout << -1 << endl;
			return;
		}
		ans.push_back({b[j][1], b[j][2]});
		j++;
	}
	sort(all(ans));
	cout << ans.size() << endl;
	for (auto x: ans) {
		cout << x.first+1 << " " << x.second+1 << endl;
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

/*-------------------------------------------------------------------------------------------------------*/
