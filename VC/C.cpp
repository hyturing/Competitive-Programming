/**
 *    Author: hyturing
 *    Created: 
**/

#include <bits/stdc++.h>
using namespace std; 

#define int long long
const int  MOD = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const int INF = 1e18;

void solve() {

    // code here
    
    int n; cin >> n;
    int arr[n];
    for (auto &x:arr) cin >> x;
    
    int ans = 0;
    bool ok = true;
    int i = 0;
    while (i < n) {
			if (ok) {
				if (arr[i] == 1) ans++;
				ok = false;
				i++;
				while(i < n and arr[i] == 0) {
					i++;
				}
				continue;
			}
			else {
				ok = true;
				if (i == n-1) break;
				if (arr[i+1] == 1) {
					i += 2;
					continue;
				}
				else {
					i++;
					while (i < n and arr[i] == 0) {
						ok = false;
						i++;
					}
				}
			}
	}
	
	cout << ans << "\n";

    return;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1;
    cin >> tc;
    
    for (int i = 1; i <= tc; i++) {
        // cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}
