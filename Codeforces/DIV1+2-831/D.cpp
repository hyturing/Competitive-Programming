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
    
    int n, m, k; cin >> n >> m >> k;

    vector<int> v(k);
    for (auto &x: v) cin >> x;

    int rem = n*m-3;

	int cur = k;
    set<int> s;
	int ocu = 0;

	for (auto x: v) {
		while (s.find(cur) != s.end()) {
            s.erase(cur);
            cur--;
        }

        if (cur == x) {
            cur--;
        }
        else {
            s.insert(x);
        }

        if (s.size() >= rem) {
            cout << "TIDAK" << endl;
            return;
        }
	}

	cout << "YA" << endl;

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
