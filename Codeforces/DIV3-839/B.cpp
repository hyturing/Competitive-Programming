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

vector<vector<int>> rotate(vector<vector<int>> a) {
	int x = a[0][0];

	a[0][0] = a[1][0];
	a[1][0] = a[1][1];
	a[1][1] = a[0][1];
	a[0][1] = x;

	return a;
}

void solve() {

    // code here
    
    vector<vector<int>> a(2, vector<int>(2));

    for (int i = 0; i < 2; i++) {
    	for (int j = 0; j < 2; j++) {
    		cin >> a[i][j];
    	}
    }

    for (int i = 0; i < 5; i++) {
    	a = rotate(a);
    	if (a[0][0] < a[0][1] and a[0][0] < a[1][0] and a[0][1] < a[1][1] and a[1][0] < a[1][1]) {
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
