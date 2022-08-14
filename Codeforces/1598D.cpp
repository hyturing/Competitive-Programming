/**
 *	Author: hyturing
 *	Created: 13 Jun 2022 01:57:55 IST
**/

#include <bits/stdc++.h>
using namespace std; 

#define ll long long
const int  MOD = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const ll INF = 1e18;

ll nCr(int n, int r){
    ll p = 1, k = 1;
 
    if (n - r < r) r = n - r;
 
    if (r != 0) {
        while (r) {
            p *= n;
            k *= r;
 
            ll m = __gcd(p, k);
 
            p /= m;
            k /= m;
 
            n--;
            r--;
        }
    }
    else p = 1;

    return p;
}

void solve() {

	// code here
	
	int n;
	cin >> n;

	set<pair<int,int>> s;

	while (n--) {
		int a, b; cin >> a >> b;
		s.insert({a,b});
	}

	n = s.size();

	cout << nCr(n, 3) << "\n";

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
