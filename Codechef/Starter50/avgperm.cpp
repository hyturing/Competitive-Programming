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

	if (n > 3) {
		vector<int> ans(n+1, 0);

		ans[1] = n-1;
		ans[n] = n;
		ans[2] = n-2;
		ans[n-1] = n-3;

		for (int i = 1; i <= n-4; i++) {
			ans[i+2] = i;
		}

		for (int i = 1; i <= n; i++) cout << ans[i] << " "; cout << endl;
	}    
	else {
		cout << 1 << " " << 2 << " " << 3 << endl;
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

