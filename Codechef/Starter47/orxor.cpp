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

void solve() {

    // code here
    
	int n, x; cin >> n >> x;

	int cnt = n-1;
	int xo = 0;
	for (int i = 1; i <= n; i++) {
		xo = xo^i;
	}    
	
	int orCount = -1;

	if (xo == x) {
		orCount = 0;
	}
	else {
		for (int i = 1; i <= n; i++) {
			int m = xo^i;
			m = m|i;
			xo = m;
			if (m == x) {
				orCount = i;
				break;
			}
			cout << m << endl;
		}
	}

	if (orCount == -1) {
		cout << -1 << "\n";
		return;
	}

	int a[n];

	for (int i = 0; i < n; i++) {
		a[i] = i+1;
	}

	int i = 1;

	while (orCount--) {
		cout << 1 << " " << a[i-1] << " " << a[i] << "\n";
		a[i] = a[i]|a[i-1];
		i++;
	}

	while (i < n) {
		cout << 2 << " " << a[i-1] << " " << a[i] << "\n";
		a[i] = a[i]^a[i-1];
		i++;
	}

	cout << a[n-1] << endl;

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

