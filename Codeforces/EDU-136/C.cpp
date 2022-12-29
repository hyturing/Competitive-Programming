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

vector<int> a(100);
vector<int> b(100);

int C(int n, int r) {

    int p = 1, k = 1;
    if (n - r < r) r = n - r;
 
    if (r != 0) {
        while (r) {
            p *= n;
            k *= r;
 
            int m = __gcd(p, k);
            p /= m;
            k /= m;
 
            n--;
            r--;
        }
    }
    else {
        p = 1;
    }
 
    return p;
}

void predicate() {
	a[2] = 1;
	b[2] = 0;

	for (int i = 4; i <= 60; i += 2) {
		a[i] = (b[i-2]+(C(i-1, i/2))%MM)%MM;
		b[i] = (a[i-2]+(C(i-2, i/2))%MM)%MM;
	}
}

void solve() {

    // code here
    
    int n; cin >> n;

    cout << a[n] << " " << b[n] << " " << 1 << endl;

    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    predicate();
    int tc = 1;
    cin >> tc;
    
    for (int i = 1; i <= tc; i++) {
        // cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}

/*-------------------------------------------------------------------------------------------------------*/
