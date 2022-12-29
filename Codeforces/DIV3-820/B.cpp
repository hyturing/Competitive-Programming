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
    string s; cin >> s;

    string ans = "";

    int i = n-1;

    while (i >= 0) {
    	if (s[i] == '0') {
    		int sum = (int)(s[i-1]-'0')+10*(s[i-2]-'0');

    		char a = 'a'+(sum-1);

    		ans.push_back(a);

    		i -= 3;
    	}
    	else {
    		int sum = (int)(s[i]-'0');

    		char a = 'a'+(sum-1);

    		ans.push_back(a);

    		i--;
    	}
    }

    reverse(ans.begin(), ans.end());

    cout << ans << endl;

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
