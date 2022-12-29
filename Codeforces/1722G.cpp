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

    int a = 0, b = 0;

    for (int i = 0; i < n-2; i++) {
        a = a^i;
        b = b^(i+1);
    }

    vector<int> ans(n);

    if (a == 0) {
        for (int i = 0; i < n-2; i++) {
            ans[i] = i+1;
        }   
        swap(a, b);
    }
    else {
        for (int i = 0; i < n-2; i++) {
            ans[i] = i;
        }
    }

    int x = (1<<31)-1;

    ans[n-2] = x;

    ans[n-1] = a^x;

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
