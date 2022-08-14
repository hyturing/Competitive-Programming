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
	string s; cin >> s;

	int one = 0, zero = 0;

	for (auto x: s) {
		if (x == '1') one++;
		else zero++;
	}    

	if (zero > one) {
		for (int i = 0; i < zero; i++) cout << 0; cout << "\n";
	}
 	else {
 		for (int i = 0; i < one; i++) cout << 1; cout << "\n";
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

