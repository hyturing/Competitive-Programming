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
	vector<int> a(n+1);
	for (int i = 1; i <= n; i++) cin >> a[i];

	int x, y;

	for (int i = 1; i <= n; i++) {
		if (a[i] == 1) x = i;
		if (a[i] == n) y = i;
	}    

	if (y < x) {
		cout << x-1+n-y-1 << "\n";
	}
	else {
		cout << x-1+n-y << "\n";
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

