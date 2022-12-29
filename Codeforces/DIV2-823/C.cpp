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
    
    string s; cin >> s;

    int n = s.size();

    stack<char> st;

    string ans = "";

    for (int i = 0; i < n; i++) {
    	while (true) {
    		if (st.empty()) break;

    		if (st.top() > s[i]) {
    			if (st.top() == '9') ans.push_back('9');
    			else {
    				char k = st.top(); k++;
    				ans.push_back(k);
    			}

    			st.pop();
    		}
    		else {
    			break;
    		}
    	}

    	st.push(s[i]);
    }

    while (true) {
    	if (st.empty()) break;
    	ans.push_back(st.top());
    	st.pop();
    }

    sort(ans.begin(), ans.end());

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
