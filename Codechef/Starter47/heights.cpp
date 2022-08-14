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

	int a[n];
	for (auto &x: a) cin >> x;

	map<int,int> mpp;

	for (auto x: a) mpp[x]++;

	int cnt = 0;

	for (auto x: mpp) {
		if (x.second == 1) cnt++;
	}    

	int mx = 0;
	for (auto x: a) mx = max(mx, x);

	if (mpp[mx] == 1 and cnt == 1) {	
		for (auto x: mpp) {
			if (x.second > 2) {
				cout << 1 << "\n";
				return;
			}
		}
		cout << 2 << "\n";
		return;
	}

	cout << (cnt+1)/2 << "\n";

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

