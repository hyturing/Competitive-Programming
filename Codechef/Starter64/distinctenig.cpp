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
    vector<int> a(2LL*n);

    for (auto &x: a) cin >> x;

    map<int,int> mp;

	for (auto x: a) mp[x]++;

	vector<int> v;

	for (auto x: mp) {
		v.pb(x.second);
	}

	sort(all(v));

	int k = sz(v);

	int sum = 0;

	for (int i = 0; i < k-1; i++) {
		sum += v[i];
	}

	int mx = (n+1)/2;

	int tot = v[k-1]-sum;

	if (tot > 2*mx) {
		cout << "NO\n";
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
