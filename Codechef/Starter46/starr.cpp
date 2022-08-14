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

    int cnt = 0;

    // if (is_sorted(s.begin(), s.end())) {
    //     cout << 0 << "\n";
    //     return;
    // }


	for (int i = n-1; i >= 0; i--) {
		if (s[i] == '0') cnt++;
		while(s[i] == '0') i--;
	}

	cout << (s[0] == '0' ? cnt-1 : cnt) << "\n";

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

