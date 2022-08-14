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
#define int long long

void solve() {

    // code here
    
    int n; cin >> n;
	int a[n];
	for (auto &x: a) cin >> x;

	int zero = 0;

	for (auto x: a) {
		if (x == 0) zero++;
	}

	if (n == 3) {
		int sum = a[0]+a[1]+a[2];

		for (auto x: a) {
			if (sum == x) {
				cout << "YES\n"; 
				return;
			}
		}

		cout << "NO\n";
		return;
	}
	else if (n == 4) {
		bool ok = true;
	
		for (int i = 0; i < n; i++) {
			for (int j = i+1; j < n; j++) {
				for (int k = j+1; k < n; k++) {
					int sum = a[i]+a[j]+a[k];
					bool flag = false;
					for (int l = 0; l < n; l++) {
						if (sum == a[l]) {
							flag = true;
							break;
						}
					}
	
					if (!flag) ok = false;
				}
			}
		}
	
		if (ok) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}

		return;
	}
	else {
		if (zero < n-2) {
			cout << "NO\n";
			return;
		}

		if (zero == n-1) {
			cout << "YES\n";
			return;
		}

		int sum = 0;

		for (auto x: a) sum += x;

		if (sum == 0) {
			cout << "YES\n";
			return;
		}

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

