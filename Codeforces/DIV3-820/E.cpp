/**
 *    Author: hyturing
 *    Created: 
**/

#include <bits/stdc++.h>
using namespace std; 

#define int long long
#define sz(x) ((int)(x).size())
#define all(x) x.begin(),x.end()
// #define endl "\n"
#define pb push_back

const int  MOD = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const long long INF = 1e18;

void solve() {

    // code here
    
    int l = 3, r = INF+10;
    int ans = 0;

    while (l < r) {
    	int mid = l + (r-l)/2;

    	cout << "? 1 " << mid << endl;

    	int n; cin >> n;

    	if (n >= 0) {
    		ans = mid;
    		l = mid+1;
    	}
    	else {
    		r = mid-1;
    	}
    }

    cout << "! " << ans << endl;

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
