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

    if (n == 1) {
        cout << 2 << endl;
        return;
    }

    if (n%3 == 0) {
    	cout << n/3 << endl;
    }
    else if (n%3 == 2) {
    	cout << n/3+1 << endl;
    }
    else {

    	if (n <= 4) {
            cout << 2 << endl;
        }
        else {
            cout << (n-4)/3+2 << endl;
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

