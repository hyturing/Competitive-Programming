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

    if (n&1) {
    	cout << -1 << "\n";
    	return;
    }
    else {
    	cout << n/2 << " " << n/2 << " " << 0 << "\n";
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

