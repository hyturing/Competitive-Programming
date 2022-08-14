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

    int a[2][n];

    for (int i = 0; i < 2; i++) {
    	for (int j = 0; j < n; j++) {
    		cin >> a[i][j];
    	}
    }

    int cur = 0;

    int ans = INF;

    for (int i = 1; i < n; i++) {
    	if (cur >= a[0][i]) {
    		cur++;
    	}
    	else {
    		cur = a[0][i]+1;
    	}
    }

    if (cur < a[1][n-1]) cur = a[1][n-1]+1;
    else cur++;

    for (int i = n-2; i >= 0; i--) {
    	if (cur >= a[1][i]) {
    		cur++;
    	}
    	else {
    		cur = a[1][i]+1;
    	}
    }

    ans = min(ans, cur);

    cur = 0;

    if (cur >= a[1][0]) cur++;
    else cur = a[1][0]+1;

    for (int i = 1; i < n; i++) {
        if (cur >= a[1][i]) {
            cur++;
        }
        else {
            cur = a[1][i]+1;
        }
    }

    if (cur >= a[0][n-1]) {
        cur++;
    }
    else {
        cur = a[0][n-1]+1;
    }

    for (int i = n-2; i > 0; i--) {
        if (cur >= a[0][i]) cur++;
        else {
            cur = a[0][i]+1;
        }
    }

    ans = min(ans, cur);

    cur = 0;

    for (int i = 0; i < n; i++) 

    cout << ans << endl;

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

