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

    int arr[k];
    for (auto &x: arr) cin >> x;

    if (n == 1 or k == 1) {
		cout << "YES\n";
		return;
	}

    bool ok = false;
	
	int prev;

	for (int i = k-1; i > 0; i--) {
		if (i == k-1) {
			prev = arr[i]-arr[i-1];
		}
		else {
			if (arr[i]-arr[i-1] > prev) {
				ok = true;
			}

			prev = arr[i]-arr[i-1];
		}
	}

	if (ok) {
		cout << "NO\n";
		return;
	}

	n = n-k+1;


	int mx;
	if (arr[0] >= 0) mx = arr[0]/n+((arr[0])%n != 0);
	else mx = arr[0]/n;

	// cout << mx << " " << prev << endl;

	

	if (mx > prev) {
		cout << "NO\n";
	}
	else {
		cout << "YES\n";
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
