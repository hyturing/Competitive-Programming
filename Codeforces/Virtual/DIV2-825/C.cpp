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
    int a[n];

    for (auto &x: a) cin >> x;

    vector<int> v;

    int sum = 0, cnt = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] > cnt) {
            sum++;
            cnt++;
        }
        else {
            v.push_back(sum);
            sum = 0;
            cnt = 0;
            i--;
        }
    }

    if (sum > 0) v.push_back(sum);

    int ans = 0;

    for (auto x: v) {
        ans += (x*x+x)/2;
    }

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
