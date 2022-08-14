/**
 *    Author: hyturing
 *    Created: 
**/

#include <bits/stdc++.h>
using namespace std; 

#define sz(x) ((int)(x).size())

const int  MOD = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const long long INF = 1e18;
#define int long long
void solve() {

    // code here
    
	int n; cin >> n;
	int a[n], b[n];
	for (auto &x: a) cin >> x;
	for (auto &x: b) cin >> x;    

	sort(a, a+n);
	sort(b, b+n);

	vector<int> aa, bb;

	for (int i = n/2; i < n; i++) {
		aa.push_back(a[i]);
		bb.push_back(b[i]);
	}

	int ans = INF;

	n = aa.size();

	for (int i = 0; i < n; i++) {
		ans = min(ans, aa[i]+bb[n-i-1]);
	}

	cout << ans << "\n";

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

