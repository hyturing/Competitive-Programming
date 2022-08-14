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
    
    int n, m; cin >> n >> m;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.rbegin(), a.rend());

	m--;

	double ans = 0;
	for (int i = 0; i < m; i++) {
		ans += (double)a[i];
	}

	vector<double> t;
	for (int i = m; i < n; i++) t.push_back(a[i]);
	sort(t.begin(), t.end());

	int len = t.size();

	if (len&1) {
		ans += t[len/2];
	}
	else {
		len /= 2;
		ans += (t[len-1]+t[len])/2;
	}

	cout << fixed << setprecision(10) << ans << "\n";

    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    cin >> tc;
    
    for (int i = 1; i <= tc; i++) {
        cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}

