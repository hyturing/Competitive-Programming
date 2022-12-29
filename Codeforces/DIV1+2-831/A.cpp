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

vector<int> mp;

void pre(){

	for (int i = 2; i <= 100000; i++) {
        bool ok = true;
        for (int j = 2; j*j <= i; j++) {
            if (i%j == 0) ok = false;
        }

        if (ok) mp.push_back(i);
    }

    return;
}

bool check(int n) {
    for (int i = 2; i*i <= n; i++) {
        if (n%i == 0) {
            return true;
        }
    }

    return false;
}

void solve() {

    // code here
    
    int n; cin >> n;

    for (int i = 0; i < mp.size(); i++) {
        if (check(n+mp[i])) {
            cout << mp[i] << endl;
            return;
        }
    }

    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    cin >> tc;
    pre();
    for (int i = 1; i <= tc; i++) {
        // cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}

/*-------------------------------------------------------------------------------------------------------*/
