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
    vector<int> a(n);

    for (auto &x: a) cin >> x;

    sort(all(a));

	int k = 2*a[0]-1;

	int count = 0;

	for (int i = 1; i < n; i++) {
		if (a[i] <= k) continue;
		else {
			if (a[i]%k == 0) count += a[i]/k;
			else count += a[i]/k+1;

            count = count-1;
		}
	}

	cout << count << endl;

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
