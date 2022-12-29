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

    vector<int> v(n);
	
	int cnt = 0;

	for (int i = 0; i < n; i++) {
		if (i == 0) v[i] = a[i];
		else {
			v[i] = v[i-1]+a[i];

			if (v[i] != 0 and a[i] == 0) {
				a[i] = -v[i];
				v[i] = 0;
			}
		}

		if (v[i] == 0) {
			// cout << i << " ";
			cnt++;
		}
	}	

	cout << cnt << endl;

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
