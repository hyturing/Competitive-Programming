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
    
	string s; cin >> s;

	int p; cin >> p;

	int w = 0;

	for (int i = 0; i < sz(s); i++) {
		w += (s[i]-'a'+1);
	}    

	map<char,int> m;

	string ss = s;

	sort(ss.rbegin(), ss.rend());

	int i = 0;
// 	cout << w << endl;
	while (w > p and i < sz(ss)) {
		w -= (ss[i]-'a'+1);
		m[ss[i]]++;
		i++;
	}
    
    // cout << w << " ";

	if (w > p) {
		cout << "\n";
	}
	else {
		for (int j = 0; j < sz(s); j++) {
			if (m.find(s[j]) == m.end()) {
				cout << s[j];
			}
			else {
				m[s[j]]--;
				if (m[s[j]] == 0) m.erase(s[j]);
			}
		}

		cout << "\n";
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

