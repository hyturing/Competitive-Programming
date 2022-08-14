/**
 *    Author: hyturing
 *    Created: 
**/

#include <bits/stdc++.h>
using namespace std; 

#define sz(x) ((int)(x).size())

const int  MOD = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const long long INF = 1e18;
#define int long long
void solve() {

    // code here
    
    int n, m; cin >> n >> m;
    map<int,int> w;

    for (int i = 1; i <= n; i++) {
        w[i] = 0;
    }
    for (int i = 0; i < m; i++) {
    	int x; cin >> x;
    	w[x]++;
    }

    int mi = 1, mx = 200000+10;

    // for (auto x: w) {
    //     // cout << x.first << " " << x.second << endl;
    // 	mi = min(mi, x.second);
    // 	mx = max(mx, x.second);
    // }

    // cout << mi << " " << mx << endl;

    int ans;

    while (mi < mx) {
    	int mid = (mi+mx)/2;

    	int eWork = 0;
        vector<int> eTime;

    	for (auto x: w) {
    		int k = x.second;
    		if (k > mid) {
    			eWork += k-mid;
    		}
    		else {
    			eTime.push_back(mid-k);
    		}
    	}

        for (auto x: eTime) {
            int k = x;
            k /= 2;
            if (k >= eWork) {
                eWork = 0;
                break;
            }
            else eWork -= k;
        }

    	if (eWork == 0) {
    		ans = mid;
    		mx = mid;
    	}
    	else {
    		mi = mid+1;
    	}
    }

    cout << ans << "\n";

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

