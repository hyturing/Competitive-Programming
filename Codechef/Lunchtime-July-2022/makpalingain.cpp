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

	string a, b;

	bool ok = true;

	for (int i = 0; i < n; i++) {
		if (ok) {
			a.push_back(s[i]);
			ok = false;
		}
		else {
			b.push_back(s[i]);
			ok = true;
		}
	}    

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	if (a == b) {
		cout << "YES\n";
		return;
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

