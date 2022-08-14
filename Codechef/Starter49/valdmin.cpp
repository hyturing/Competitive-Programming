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
    
	map<int,int> m;
	for (int i = 0; i < 3; i++) {
		int x; cin >> x;
		m[x]++;
	}    

	if (m.size() == 3) {
		cout << "NO\n";
	}
	else if (m.size() == 2) {
		auto it = m.begin();
		int a = it->second;
		it++;
		int b = it->second;

		if (a > b) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
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

