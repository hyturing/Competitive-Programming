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

bool check(int a[], int n) {

	for (int i = 1; i < n; i++) {
		if (a[i] < a[i-1]) return false;
	}	

	return true;
}

void solve() {

    // code here
    
	int n; cin >> n;

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}	    

	if (check(a, n)) {
		cout << 0 << endl;
		return;
	}

	int cur = 0;
	set<int> s;
	int prev = -1;
	for (int i = 0; i < n; i++) {
		if (s.find(a[i]) != s.end() and a[i] != prev) {
			cur = i;
		}
		prev = a[i];
		s.insert(a[i]);
	}	

	int back = -1;

	for (int i = n-2; i >= 0; i--) {
		if (a[i] > a[i+1]) {
			back = i;
			break;
		}
	}

	cur = max(cur, back);

	map<int,int> m;

	for (int i = 0; i <= cur; i++) m[a[i]]++;

	cout << m.size() << endl;

	// for (auto x: m) cout << x.first << " " << x.second << endl;

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
