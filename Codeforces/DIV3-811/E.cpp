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

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}    

	for (int i = 0; i < n; i++) {
		while (a[i]%10 != 0 and a[i]%10 != 2) {
			a[i] = a[i]+a[i]%10;
		}

		if (a[i]%10 == 2) a[i] %= 20;
	}

	if (a == vector<int>(n, a[0])) {
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
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

