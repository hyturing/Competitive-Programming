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

    int arr[n];
    for (auto &x: arr) cin >> x;


    int cur[n];

    cur[0] = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > 0 and cur[i-1] >= arr[i]) {
            cout << -1 << endl;
            return;
        }

        cur[i] = cur[i-1]+arr[i];
    }

    for (auto x: cur) cout << x << " "; cout << endl;

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
