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
    
	int x, y; cin >> x >> y;

	int r = x/2;
	if (y <= r*r) {
		int right = x/2;

		bool ok = false;
		int left;
		for (int i = 1; i*i <= y; i++) {
			if (y%i == 0) {
				ok = true;
				left = i;
			}
		}

		if (max(left, y/left) >= right) {
			ok = false;
		}

		if (ok) {
			cout << min(left, y/left)  << " " << max(left, y/left) << endl;
			if (x&1) {
				cout << right << " " << right+1  << endl;
			}
			else {
				cout << right << " " << right << endl;
			}
		}
		else {
			cout << -1 << endl;
		}

		return;
	}

	int left = x/2+x%2;

	bool ok = false;
	int right;
	for (int i = left+1; i*i <= y; i++) {
		if (y%i == 0) {
			ok = true;
			right = i;
			break;
		}
	}

	if (min(right, y/right) <= left) {
		ok = false;
	}	

	if (ok) {
		if (x&1) {
			cout << left-1 << " " << left << endl;
		}
		else {
			cout << left << " " << left << endl;
		}

		cout << min(right, y/right) << " " << max(right, y/right) << endl;
	}    
	else {
		cout << -1 << endl;
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

