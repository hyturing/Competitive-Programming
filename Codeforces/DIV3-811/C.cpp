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

    string s;
    set<char> ok;

    int sum = n;

    for (int i = 9; i >= 1; i--) {
    	if (sum > 0) {
            if (i > sum) continue;
    		s.push_back(('0'+i));
            sum -= i;
    	}
    }

    reverse(all(s));

    cout << s << endl;

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

