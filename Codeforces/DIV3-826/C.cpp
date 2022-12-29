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

    int sum = 0;

	for (auto x: a) sum += x;

	int mi = INF;

	for (int i = 1; i*i <= sum; i++) {
		if (sum%i == 0) {
				
				bool ok = true;
				int mx = 0, cur = 0;
				int s = 0;
				for (int j = 0; j < n; j++) {
					s += a[j];
					cur++;
					if (s == i) {
						mx = max(mx, cur);
						cur = 0;
						s = 0;
					}
					else if (s > i or j == n-1) {
						ok = false;
						break;
					}
				}

				if (ok) {
					mi = min(mi, mx);
				}

				int k = sum/i;

				ok = true;
				mx = 0; cur = 0;
				s = 0;
				for (int j = 0; j < n; j++) {
					s += a[j];
					cur++;
					if (s == k) {
						mx = max(mx, cur);
						cur = 0;
						s = 0;
					}
					else if (s > k or j == n-1) {
						ok = false;
						break;
					}
				}

				if (ok) {
					mi = min(mi, mx);
				}

				// cout << i << " " << sum/i << " " << mi << endl;
		}
	}

	cout << mi << endl;

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
