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

    int t = n-3;

    int k = t-1;

    int a, b, c;

    if (k%3 == 0) {
        a = 1;
        b = k/3;
        c = (k/3)*2;
    }
    else if (k%3 == 1){
        a = 1;
        b = k/3;
        c = (k/3)*2+1;
    }
    else {
        a = 1;
        b = k/3+1;
        c = (k/3)*2+1;
    }

    cout << min(abs(a-b), min(abs(b-c), abs(c-a))) << endl;

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
