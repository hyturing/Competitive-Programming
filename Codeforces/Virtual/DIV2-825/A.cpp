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

    int a[n], b[n];

    for (auto &x: a) cin >> x;
    for (auto &x: b) cin >> x;

    int c1 = 0, c2 = 0, c3 = 0, c4 = 0;

	for (auto x: a) {
		if (x == 0) c1++;
		else c2++;
	}

	for (auto x: b) {
		if (x == 0) c3++;
		else c4++;
	}

	int ans = min(abs(c1-c3), abs(c2-c4));

    int cnt = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) cnt++;
    }

    if (ans != cnt) ans++;

    cout << ans << endl;

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
