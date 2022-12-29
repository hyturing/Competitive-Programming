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

    vector<int> a(n), b(n);
    for (auto &x: a) cin >> x;
    for (auto &x: b) cin >> x;

    vector<int> fire, frost;

	for (int i = 0; i < n; i++) {
		if (a[i] == 0) fire.pb(b[i]);
		else frost.pb(b[i]);
	}


	if (sz(fire) > sz(frost)) swap(fire, frost);

	sort(all(fire));
	sort(all(frost));

	reverse(all(frost));
	reverse(all(fire));

	int sum = 0;

	for (int i = 0; i < sz(fire); i++) {
		sum += 2*fire[i] + 2*frost[i];
	}

	for (int i = sz(fire); i < sz(frost); i++) {
		sum += frost[i];
	}

	if (sz(fire) == sz(frost)) {
		sum -= min(fire[n/2-1], frost[n/2-1]);
	}

	cout << sum << endl;	

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
