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
    
	int n, x; cin >> n >> x;

	if (x >= n and x <= 2*n-1) {
		if (x == n) {
			for (int i = 1; i <= n; i++) cout << i << " "; cout << endl;
		}
		else {
			vector<int> ans(n, 0);
			int k = x-n+1;
			ans[0] = k;
			ans[1] = 1;

			int cnt = 2;

			for (int i = 2; i < n; i++) {
				if (cnt == k) cnt++;
				ans[i] = cnt;
				cnt++;
			}

			for (auto x: ans) cout << x << " "; cout << endl;
		}
	}    
	else {
		cout << -1 << endl;		
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

