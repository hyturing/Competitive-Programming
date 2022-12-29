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
    
	int n, q; cin >> n >> q;

	vector<int> a(n);
	for (auto &x: a) cin >> x;

	int index, mx = 0;

	for (int i = 0; i < n; i++) {
		if (a[i] >= mx) {
			mx = a[i];
			index = i;
		}
	}

	int shift = n-index;

	for (int i = 0; i < q; i++) {
		int x, k; cin >> x >> k;
		x--;

		int ans = 0;

		if 
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
