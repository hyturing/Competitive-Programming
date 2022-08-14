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
    
    int n, m; cin >> n >> m;

    vector<int> a(n);
    for (auto &x: a) cin >> x;

    map<int,int> d;

	vector<int> x(m), y(m);

	for (int i = 0; i < m; i++) {
		cin >> x[i] >> y[i];
		x[i]--;
		y[i]--;
		d[x[i]]++; d[y[i]]++;
	}

	if (m&1) {
		int ans = INT_MAX;
		for (int i = 0; i < n; i++) {
			 if (d.find(i) != d.end() and d[i]&1) {
			 	ans = min(ans, a[i]);
			 }
		}

		for (int i = 0; i < m; i++) {
			if (d[x[i]]%2 == 0 and d[y[i]]%2 == 0) {
				ans = min(ans, a[x[i]]+a[y[i]]);
			}
		}

		cout << ans << endl;
		return;
	}
	else {
		cout << 0 << endl;
		return;
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

