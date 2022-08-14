
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

bool prime(int k) {
		if (k == 1) {
			return false;
		}
		
		for (int i = 2; i*i <= k; i++) {
			if (k%i == 0) {
				return false;
			}
		}
		
		return true;
}

void solve() {

    // code here
    
	int n = 1000005;
	vector<int> p, sq;
	for (int i = 1; i <= n; i++) {
		if (prime(i)) {
			p.push_back(i);
			if (i*i <= 1000005) sq.push_back(i*i);
		}
	}
	
	int t; cin >> t;
	
	while (t--) {
		int k; cin >> k;
		
		auto i = upper_bound(p.begin(), p.end(), k);
		auto j = upper_bound(sq.begin(), sq.end(), k);
		int a = i-p.begin();
		int b = j-sq.begin();
		cout << a-b+1 << "\n";
	}

    return;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1;
//    cin >> tc;
    
    for (int i = 1; i <= tc; i++) {
        // cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}
