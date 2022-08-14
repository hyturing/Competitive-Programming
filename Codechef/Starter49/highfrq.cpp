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

    map<int,int> m;

	for (auto x: a) {
		m[x]++;
	}

	if (m.size() == 1) {
		cout << (n+1)/2 << endl;
	}
	else {
		vector<int> v;

        for (auto x: m) v.pb(x.second);

        sort(v.rbegin(), v.rend());

        cout << max(v[1], (v[0]+1)/2) << endl;
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

