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
	set<int> s;

	s.insert(0);
    map<int,int> m;
    
	for (int j = 0; j < n; j++) {
		char k;
        int num;
        cin >> k >> num;

        if (k == '+') {
            s.insert(num);
        }
        else {
            int i;

            if (m.find(num) != m.end()) {
                i = m[num];
            }
            else i = num;

            while (s.find(i) != s.end()) {
                i += num;
            }

            m[num] = i;
            cout << i << endl;
        }
        
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
