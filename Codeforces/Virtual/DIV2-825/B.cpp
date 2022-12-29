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

int lcm (int a, int b) {
	return (a*b)/__gcd(a,b);
}

void solve() {

    // code here
    
    int n; cin >> n;

    int a[n];
    for (auto &x: a) cin >> x;

    int b[n+1];

	b[0] = a[0];
	b[n] = a[n-1];

	for (int i = 1; i < n; i++) {
		b[i] = lcm(a[i], a[i-1]);
	}

	for (int i = 0; i < n; i++) {
		if (a[i] != __gcd(b[i], b[i+1])) {
			cout << "NO\n";
			return;
		}
	}

	cout << "YES\n";

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
