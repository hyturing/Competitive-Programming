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
    
    int n, m; cin >> n >> m;

    if (m < n) {
    	cout << "No\n";
    }
    else {
    	if (m%n == 0) {
    		cout << "Yes\n";
    		for (int i = 0; i < n; i++) {
    			cout << m/n << " ";
    		}
    		cout << endl;
    	}
    	else {
            if (n&1) {
                vector<int> ans(n, m/n);
                int extra = m - (m/n)*n;

                ans[0] += extra;
                cout << "Yes\n";
                for (auto x: ans) cout << x << " ";
                cout << endl;
            }
            else {
                if (m&1) {
                    cout << "No\n";
                    return;
                }
                vector<int> ans(n, m/n);
                int extra = m - (m/n)*n;

                ans[0] += extra/2;
                ans[1] += extra/2;
                cout << "Yes\n";
                for (auto x: ans) cout << x << " ";
                cout << endl;
            }
    		
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
