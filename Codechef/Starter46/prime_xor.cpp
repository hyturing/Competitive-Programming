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
    
	int x, y; cin >> x >> y;
	int z = (x^y);

	int a = 2;
	int b = x^a;
	int c = b^y;

    int cnt = 0;

    if (a&1) cnt++;
    if (b&1) cnt++;
    if (c&1) cnt++;

    if (cnt > 1) {
        vector<int> ans; ans.push_back(a); ans.push_back(b); ans.push_back(c);
        sort(ans.begin(), ans.end());
        for (auto x: ans) cout << x << " "; cout << "\n";
            return;
    }

    b = 2;
    a = x^b;
    c = b^y;

    cnt = 0;

    if (a&1) cnt++;
    if (b&1) cnt++;
    if (c&1) cnt++;

    if (cnt > 1) {
        vector<int> ans; ans.push_back(a); ans.push_back(b); ans.push_back(c);
        sort(ans.begin(), ans.end());
        for (auto x: ans) cout << x << " "; cout << "\n";
            return;
    }

    c = 2;
    a = z^c;
    b = y^c;

    cnt = 0;

    if (a&1) cnt++;
    if (b&1) cnt++;
    if (c&1) cnt++;

    if (cnt > 1) {
        vector<int> ans; ans.push_back(a); ans.push_back(b); ans.push_back(c);
        sort(ans.begin(), ans.end());
        for (auto x: ans) cout << x << " "; cout << "\n";
            return;
    }

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

