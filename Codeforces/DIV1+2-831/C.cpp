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
    set<int> s;

    for (auto &x: a) {
    	cin >> x;
    	s.insert(x);
    }

    sort(all(a));

	int sum = 0;

	for (int i = 0; i < n-2; i++) {
		sum = max(sum, a[n-1]+a[i+1]-2*a[i]);
	}

	for (int i = 2; i < n; i++) {
		sum = max(sum, 2*a[i]-a[i-1]-a[0]);
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
