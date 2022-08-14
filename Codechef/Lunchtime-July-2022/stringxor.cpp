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
    
	int n; cin >> n;
	string a, b; cin >> a >> b;

	if (a == b) {
		cout << "YES\n";
		return;
	}

	int cnt = 0;

	for (auto x: a) {
		cnt += (x-'0');
	}

	if (cnt == 0) {
		cout << "NO\n";
		return;
	}

	bool ok = false;

	for (int i = 0; i < n-1; i++) {
		if (b[i] == b[i+1]) {
			ok = true;
			break;
		}
	}

	if (ok) {
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
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

