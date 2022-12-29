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
    
    int k, n;
    cin >> k >> n;

    vector<int> arr;

    for (int i = 0; i <= n; i++) {
        arr.push_back(i);
    }

    int rem = n;
    int f = n-1;
    int cnt = 1;
    while (rem-cnt >= k and f > 0) {
        int r = cnt;

        while(r > 0 and f > 0) {
            arr[f] = -1;
            f--;
            r--;
        }

        f--;
        rem -= cnt;
        cnt++;
    }

    vector<int> ans;
    for (int i = 1; i <= n; i++) {
        if (arr[i] > 0) ans.push_back(arr[i]);
    }

    
    while (ans.size() > k) {
        ans.erase(ans.begin());
    }

    for (auto x: ans) cout << x << " "; cout << endl;

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
