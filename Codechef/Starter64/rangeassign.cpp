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

    if (n <= 2) {
    	cout << "YES\n";
    	return;
    }
    
    if (a[0] == a[n-1] or a[1] == a[n-1] or a[0] == a[n-2]) {
    	cout << "YES\n";
    	return;
    }

    
    for (int i = 1; i < n-1; i++) {
        if (a[i] == a[0] and a[i+1] == a[n-1]) {
            cout << "YES\n";
            return;
        }
    }


   	cout << "NO\n";


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
