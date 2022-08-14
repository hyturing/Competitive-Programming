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
    
	int n; cin >> n;

	vector<int> a(n), b(n);

	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++) cin >> b[i];
	
	map<int,int> m;

	for (int i = 0; i < n; i++) {
		while (a[i]%2 == 0) a[i] /= 2;
		while (b[i]%2 == 0) b[i] /= 2;

		m[a[i]]++;
	}    

	bool ok = true;

	for (int i = 0; i < n; i++) {
		int temp = b[i];

		while (1) {
			if (m.find(temp) != m.end()) {
				m[temp]--;
				if (m[temp] == 0) m.erase(temp);
				break;
			}

			temp /= 2;
			if (temp == 0) {
				ok = false;
				break;
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

