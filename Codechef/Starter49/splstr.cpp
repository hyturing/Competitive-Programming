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

void solve() {

    // code here
    
	int n, k; cin >> n >> k;
	string s; cin >> s;

	int one = 0, zero = 0;

	for (auto x: s) {
		if (x == '1') one++;
		else zero++;
	}    

	if (one == zero) {
		cout << 0 << endl;
		return;
	}

	if (k >= n) {
		cout << 1 << endl;
	}
	else {
		int extra = abs(one-zero);

		if (extra%k == 0) {
			cout << extra/k << endl;
		}
		else {
			cout << extra/k+1 << endl;
		}
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

/*-------------------------------------------------------------------------------------------------------*/

