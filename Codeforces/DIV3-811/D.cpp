/**
 *    Author: hyturing
 *    Created: 
**/

#include <bits/stdc++.h>
using namespace std; 

// #define int long long
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
    
	string s; cin >> s;
	int n; cin >> n;

	vector<string> v(n);
	for (auto &x: v) cin >> x;

	map<string, int> mp;

	for (int i = 0; i < n; i++) mp[v[i]] = i;

	auto comp = [&] (string a, string b) {
		if (a.size() == b.size()) return false;
		else return a.size() > b.size();
	};

	// sort(all(v), comp);

	// for (auto x: v) cout << x << " "; cout << endl;

	vector<pair<int,int>> ans;

	int cur = 0;
	while (cur < sz(s)) {
		vector<int> c = {cur, -1, -1};
		for (int i = 0; i < n; i++) {
			for (int j = 0; j <= cur and j+sz(v[i]) <= sz(s); j++) {
				if (j+sz(v[i]) <= sz(s)) {
					if (s.substr(j, sz(v[i])) == v[i]) {
						c = max(c, vector<int>{j+sz(v[i]), i, j});
					}
				}
			}
		}

		if (c[0] == cur) {
			cout << -1 << endl;
			return;
		}

		cur = c[0];
		ans.push_back({c[1], c[2]});
	}

	cout << ans.size() << endl;
	for (auto x: ans) cout << x.first+1 << " " << x.second+1 << endl;

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

