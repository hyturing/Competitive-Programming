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

	string t = s;
	while (true) {
		if (n == 0) {
			break;
		}
		if (n&1) {
			t = t.substr(0, n-1);
			n--; 
		}
		else {
			string a = t.substr(0, n/2);
			string b = t.substr(n/2, n/2);

			if (a != b) {
				cout << "NO\n";
				return;
			}

			t = a;
			n /= 2;
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

