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

    vector<pair<int,int>> v;

    for (int i = 0; i < n; i++) {
    	int a, b; cin >> a >> b;
    	if (a < b) swap(a,b);
    	v.push_back({a,b});
    }

    sort(all(v));
    reverse(all(v));
    int sum = 0;

    if (v.size() == 1) {
        cout << 2*(v[0].first+v[0].second) << endl;
        return;
    }

    for (int i = 0; i < n; i++) {
    	sum += (2*v[i].second);
        
        if (i == 0) {
            sum += v[i].first;
        }
        else if (i == n-1) {
            sum += v[i-1].first-v[i].first;
            sum += v[i].first;
        }
        else {
            sum += v[i-1].first-v[i].first;
        }
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
