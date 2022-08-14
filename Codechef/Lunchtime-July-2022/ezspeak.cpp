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

	set<char> mpp = {'a', 'e', 'i', 'o', 'u'};

	bool ok = false;

	for (int i = 0; i < n-3; i++) {
		int cnt = 0;
		for (int j = i; j < i+4; j++) {
			if (mpp.find(s[j]) == mpp.end()) cnt++;
		}

		if (cnt == 4) {
			ok = true;
			break;
		}
	}    

	if (ok) {
		cout << "NO\n";
	}
	else {
		cout << "YES\n";
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

