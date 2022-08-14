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
    
    int n, c, q; cin >> n >> c >> q;

    string s; cin >> s;

    int a[c+1], b[c+1], x[c+1], y[c+1];

    a[0] = x[0] = 1, b[0] = y[0] = s.size();

    for (int i = 1; i <= c; i++) {
    	cin >> a[i] >> b[i];
        x[i] = a[i], y[i] = b[i];
    	int gap = b[i]-a[i]+1;

    	a[i] = b[i-1]+1;
    	b[i] = b[i-1]+gap;
    }

    for (int i = 0; i < q; i++) {
    	int cur;
    	cin >> cur;

        for (int i = c; i > 0; i--) {
            if (cur >= a[i] and cur <= b[i]) {
                cur = x[i]+cur-a[i];
            }
        } 

        cout << s[cur-1] << endl;
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
