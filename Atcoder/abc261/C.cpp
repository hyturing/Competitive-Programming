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

	string s[n];
	for (int i = 0; i < n; i++) cin >> s[i];

	map<string,int> m;

	for (int i = 0; i < n; i++) {
		if (m.find(s[i]) == m.end()) {
			cout << s[i] << endl;
		}
		else {
			cout << s[i] << '(' << m[s[i]] << ')' << endl;
		}
		m[s[i]]++;
	} 

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

