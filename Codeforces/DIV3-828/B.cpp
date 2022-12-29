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
    
    int n, q; cin >> n >> q;

    vector<int> a(n);
    for (auto &x: a) cin >> x;

    int odd = 0, even = 0, s1 = 0, s0 = 0;

	for (auto x: a) {
		if (x&1) {s1+=x; odd++;}
		else {s0+=x; even++;}
	}

	for (int i = 0; i < q; i++) {
		int t, x; cin >> t >> x;

		if (t == 0) {
			if (x&1) {
				s0 += even*x;
				odd += even;
				even = 0;
			}
			else {
				s0 += even*x;
			}
		}
		else {
			if (x&1) {
				s1 += odd*x;
				even += odd;
				odd = 0;
			}
			else {
				s1 += odd*x;
			}
		}

		cout << s0+s1 << endl;
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
