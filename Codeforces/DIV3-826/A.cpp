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
    
    string a, b; cin >> a >> b;

    char c = a[sz(a)-1], d = b[sz(b)-1];

    if (a == "M" or b == "M") {
    	if (a == b) {
    		cout << "=" << endl;
    	}
    	else if (a == "M") {
    		if (b[sz(b)-1] == 'S') {
    			cout << ">" << endl;
    		}
    		else cout << "<" << endl;
    	}
    	else {
    		if (a[sz(a)-1] == 'S') {
    			cout << "<" << endl;
    		}
    		else cout << ">" << endl;
    	}
    }
    else {
    	if (c == d) {
    		if (a.size() == b.size()) cout << "=" << endl;
    		else {
    			if (c == 'S') {
    				if (a.size() > b.size()) {
    					cout << "<" << endl;
    				}
    				else cout << ">" << endl;
    			}
    			else {
    				if (a.size() > b.size()) {
    					cout << ">" << endl;
    				}
    				else cout << "<" << endl;
    			}
    		}
    	}
    	else {
    		if (c == 'S') cout << "<" << endl;
    		else cout << ">" << endl;
    	}
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

/*-------------------------------------------------------------------------------------------------------*/
