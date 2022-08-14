/**
 *    Author: hyturing
 *    Created: 30 Jun 2022 03:44:05 IST
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

    auto query = [&](int l, int r) {
    	cout << "? " << l << " " << r << "\n";
    	cout.flush();

    	int v[r-l+1];
    	for (int i = 0; i < r-l+1; i++) cin >> v[i];

    	int cnt = 0;
    	for (auto x: v) {
    		if (x >= l and x <= r) cnt++;
    	}

    	if (cnt&1) {
    		return true;
    	}
    	else {
    		return false;
    	}
    };

    int l = 1, r = n;
    int mid;
    while (l < r) {
    	mid = (l+r)/2;

    	if (query(l, mid)) {
    		r = mid;
    	}
    	else {
    		l = mid+1;
    	}
    }

    cout << "! " << l << "\n";

    cout.flush();

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

