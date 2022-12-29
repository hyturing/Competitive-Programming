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
    
    int n; cin >> n;
    vector<int> a(n);

    for (auto &x: a) cin >> x;

    int odd = 0, even = 0;

	for (auto x: a) {
		if (x&1) odd++;
		else even++;
	}

	if (even == 0 or odd == 0) {
		if (even == 0) {
			int k = odd/2+odd%2;

			if (k&1) cout << "Bob" << endl;
			else cout << "Alice" << endl;
		}
		else {
			cout << "Alice" << endl;
		}

		return;
	}

	if (odd&1) {
		cout << "Alice" << endl;
	}
	else {
		int k = odd/2;

		if (k%2 == 0) {
			cout << "Alice" << endl;
		}
		else cout << "Bob" << endl;
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
