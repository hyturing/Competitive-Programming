/**
 *    Author: hyturing
 *    Created: 
**/

#include <bits/stdc++.h>
using namespace std; 

#define sz(x) ((int)(x).size())

const int  MOD = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const long long INF = 1e18;

void solve() {

    // code here
    
	int n; cin >> n;
	string s; cin >> s;

    set<int> ok = {'a', 'e', 'i', 'o', 'u'};

	int a[n] = {0};

    for (int i = n-2; i >= 0; i--) {
        if (ok.find(s[i+1]) != ok.end()) {
            a[i] = (a[i+1]+1);
        }
        else {
            a[i] = a[i+1];
        }
    }

    string rev = "", n_rev = "";

    for (int i = 0; i < n; i++) {
        if (a[i]&1) rev += s[i];
        else n_rev += s[i];
    }

    reverse(rev.begin(), rev.end());

    cout << rev << n_rev << "\n";

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

