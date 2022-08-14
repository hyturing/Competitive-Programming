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

int x;
int y;

int count(int colour, int level) {
	if (level == 1) return (colour ? 1 : 0);

	if (colour == 0) {
		return count(0, level-1)+count(1, level)*x; 
	}
	else {
		return count(0, level-1)+count(1, level-1)*y;
	}
}

void solve() {

    // code here
    
    int n; cin >> n >> x >> y;

    cout << count(0, n) << endl;

    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    // cin >> tc;
    
    for (int i = 1; i <= tc; i++) {
        // cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}

/*-------------------------------------------------------------------------------------------------------*/

