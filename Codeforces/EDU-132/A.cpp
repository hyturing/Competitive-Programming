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
    
    int x; cin >> x;

    int arr[4];
    for (int i = 1; i < 4; i++) cin >> arr[i];

    bool ok[4] = {0};

	while (true) {
		ok[x] = 1;
		x = arr[x];

		if (x == 0) break;
	}

	for (int i = 1; i < 4; i++) {
		if (!ok[i]) {
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

