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
	vector<int> a(n);
	for (auto &x: a) cin >> x;

	int m; cin >> m;
	vector<int> b(m);
	for (auto &x: b) cin >> x;

	int i = 0;
	int ans = 0;
	for (int j = 0; j < n; j++) {
		
	}
	while (i < n) {

	}     

    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    cin >> tc;
    
    for (int i = 1; i <= tc; i++) {
        cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}

