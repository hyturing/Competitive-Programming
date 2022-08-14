/**
 *    Author: hyturing
 *    Created: 
**/

#include <bits/stdc++.h>
using namespace std; 

#define int long long
#define sz(x) ((int)(x).size())
#define all(x) x.begin(),x.end()
#define endl "\n"
#define pb push_back

const int  MOD = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const long long INF = 1e18;

bool is_palin(string s, int n) {
	bool ok = true;

	for (int i = 0; i < n/2; i++) {
		if (s[i] != s[n-i-1]) ok = false;
	}

	return ok;
}

void solve() {

    // code here
    
	int n; cin >> n;
	string s; cin >> s;

	if (is_palin(s, n)) {
		cout << "YES\n";
		return;
	}

	int a = 0, b = 0;

	if (n&1) {
		for (int i = 0; i < n-1; i++) {
			if (s[i] == 'A' and s[i+1] == 'B') a++;
			if (s[i] == 'B' and s[i+1] == 'A') b++;
		}


		if (b >= a) {
			cout << "YES\n";
			return;
		}
		else {
			cout << "No\n";
			return;
		}
	}
	else {
		for (int i = 0; i < n/2-1; i++) {
			if (s[i] == 'A' and s[i+1] == 'B') a++;
			if (s[i] == 'B' and s[i+1] == 'A') b++;
		}
		for (int i = n/2; i < n-1; i++) {
			if (s[i] == 'A' and s[i+1] == 'B') a++;
			if (s[i] == 'B' and s[i+1] == 'A') b++;
		}

		if (b >= a) {
			cout << "YES\n";
			return;
		}
		else {
			cout << "No\n";
			return;
		}
	}

    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    // cin >> tc;
    
    for (int i = 1; i <= tc; i++) {
        // cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}

/*-------------------------------------------------------------------------------------------------------*/

