/**
 *    Author: hyturing
 *    Created: 30 Jun 2022 04:18:22 IST
**/

#include <bits/stdc++.h>
using namespace std; 

#define sz(x) ((int)(x).size())

const int  MOD = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const long long INF = 1e18;

int prime(int n){

	int ans = 0;

    while (n % 2 == 0){
        ans += 2;
        n = n/2;
    }
 
    for (int i = 3; i <= sqrt(n); i = i + 2){
        while (n % i == 0){
        	ans += i;
            n = n/i;
        }
    }

    if (n > 2) ans += n;

    return ans;
}

void solve() {

    // code here
    
    int n, q; cin >> n >> q;

    while (q--) {
    	int u, v; cin >> u >> v;
    	if (u > v) swap(u, v);
    	int x = __gcd(u, v);

    	int ans = 0;

    	if (x == 1) {
			ans = prime(u)+prime(v);			
    	}
    	else {
    		if (x == u) {
    			ans = prime(v)-prime(u);
    		}
    		else {
    			ans = prime(v)+prime(u)-2*prime(x);
    		}
    	}
    	cout << ans << "\n";
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

