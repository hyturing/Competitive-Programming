/**
 *    Author: hyturing
 *    Created: 
**/

#include <bits/stdc++.h>
using namespace std; 

#define sz(x) ((int)(x).size())

const int  MOD = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const long long INF = 1e18;

void solve() {

    // code here
    
    int a, b, c, d;
    cin >> a >> b >> c >> d;

   int cnt = 0;

   if (a) cnt++;
   if (b) cnt++;
   if (c) cnt++;
   if (d) cnt++;

   if (cnt == 0) {
   		cout << 0 << "\n";
   		return;
   }

   if (cnt == 4) {
        cout << 2 << "\n";
        return;
   }

   cout << 1 << "\n";

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

