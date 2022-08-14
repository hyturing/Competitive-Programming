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
    
	int n, k; cin >> n >> k;

	int a[n+1] = {0}, pre[n+1] = {0};

	for (int i = 1; i <= n; i++) cin >> a[i];

	for (int i = 1; i <= n; i++) pre[i] = pre[i-1]+a[i];


	int ans = pre[n]-k*n;

	for (int i = 1; i <= n; i++) {
		int cur = pre[i-1]-(i-1)*k;

		for (int j = i; j <= min(i+30, n); j++) {
			cur += a[j]>>(j-i+1);
		}

		// cout << endl;

		ans = max(cur, ans);
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

