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

	if (n == 3) {
		cout << -1 << "\n";
		return;
	}

	vector<int> a(n+1);
	for (int i = 1; i <= n; i++) a[i] = i;

	for (int i = 3; i <= n; i++) {
		if (i == n) {
			if (a[i] == (a[i-1]^a[i-2])) swap(a[i], a[i-4]);
			continue;
		}
		if (a[i] == (a[i-1]^a[i-2])) swap(a[i], a[i+1]);
	}    

	for (int i = 3; i <= n; i++) {
		if (a[i] == (a[i-1]^a[i-2])) {
			cout << -1 << "\n";
			return;
		}
	}

	for (int i = 1; i <= n; i++) {
		cout << a[i] << " ";
	}

	cout << "\n";

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

