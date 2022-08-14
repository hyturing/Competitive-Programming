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
    
	int n, x, y; cin >> n >> x >> y;

	vector<int> a(n);
	for (auto &x: a) cin >> x;
	
	if (x <= y) {
		int mx = 0;

		for (auto t: a) {
			if (t%y == 0) mx = max(mx, t/y);
			else mx = max(mx, t/y+1);
		}

		cout << mx << endl;
	}    
	else {
		int cnt = 0;

		int i = n-1;
		// int cur = i;
		while (i >= 0) {
			int req;
			a[i] -= y*cnt;
			if (a[i]%x == 0) req = a[i]/x;
			else req = a[i]/x+1;

			cnt += req;

			a[i] = 0;

			while (i >= 0 and a[i]-y*cnt <= 0) i--;

		}

		cout << cnt << endl;
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

