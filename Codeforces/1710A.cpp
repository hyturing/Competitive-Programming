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

bool ok(int n, int m, int k, int a[]) {

	int tot = 0;
	bool flag = 0;

	for (int i = 0; i < k; i++) {
		if (a[i]/n > 2) flag = 1;
		if (a[i]/n >= 2) tot += a[i]/n;
	}                                                                                                                    

	if (tot >= m and (flag or m%2 == 0)) return true;
	return false;
}

void solve() {

    // code here
    
	int n, m, k; cin >> n >> m >> k;

	int a[k];
	for (auto &x: a) cin >> x;

	bool ans = ok(n, m, k, a);

	if (ans) {
		cout << "YES\n";
		return;
	}

	swap(n, m);

	ans = ok(n, m, k, a);

	if (ans) {
		cout << "YES\n";
		return;
	}

	cout << "NO\n";
	
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

