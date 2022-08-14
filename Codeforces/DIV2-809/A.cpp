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
    
   	int n, m; cin >> n >> m;
   	int a[n+1];
   	for (int i = 1; i <= n; i++) cin >> a[i];

   	string s;

   	for (int i = 0; i < m; i++) s.push_back('B');

   	for (int i = 1; i <= n; i++) {
   		int x = a[i];
   		int y = m+1-a[i];

   		if (s[min(x,y)-1] == 'B') {
   			s[min(x,y)-1] = 'A';
   		}
   		else {
   			s[max(x,y)-1] = 'A';
   		}
   	}

   	cout << s << "\n";

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

