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
    
    int n, l, r; cin >> n >> l >> r;

    int a[n+1];

    bool ok = true;

    for (int i = 1; i <= n; i++) {
    	int k = l%i;
    	int num = l+i-k;
        if (k == 0) num = l;
    	if (num >= l and num <= r) {
    		a[i] = num;
    	}
    	else {
    		ok = false;
    		break;
    	}
    }

    if (ok) {
    	cout << "YES\n";
    	for (int i = 1; i <= n; i++) {
    		cout << a[i] << " ";
    	}
    	cout << "\n";
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

