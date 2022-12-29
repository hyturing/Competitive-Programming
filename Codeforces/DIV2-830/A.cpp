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

bool ok(vector<int> v) {
	int r = v[0];

	for (auto x: v) {
		r = __gcd(r, x);
	}

	if (r == 1) return true;
	else return false;
}

void solve() {

    // code here
    
    int n; cin >> n;
    vector<int> a(n);

    for (auto &x: a) cin >> x;

    if (ok(a)) {
        cout << 0 << endl;
        return;
    }

    int ans = INF;

    for (int i = 0; i < n; i++) {
        vector<int> k = a;
        k[i] = __gcd(i+1, k[i]);

        if (ok(k)) {
            ans = min(ans, n-i);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            vector<int> k = a;
            k[i] = __gcd(i+1, k[i]);
            k[j] = __gcd(j+1, k[j]);

            if (ok(k)) {
                ans = min(ans, n-i+n-j);
            }
        }
    }

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
