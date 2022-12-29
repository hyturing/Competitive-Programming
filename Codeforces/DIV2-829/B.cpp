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

    int mi = n/2;

    // if (mi == 1) {
    //     for (int i = 1; i <= n; i++) cout << i << " "; cout << endl;
    //     return;
    // }

    vector<vector<int>> v;


    for (int i = 1; i < 1+mi; i++) {
    	vector<int> a;
    	int k = i;

    	while (k <= n) {
    		a.push_back(k);
    		k += mi;
    	}

    	v.push_back(a);
    	a.clear();
    }

    for (int i = v.size()-1; i >= 0; i--) {
        for (auto x: v[i]) cout << x << " ";
    }

    cout << endl;

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
