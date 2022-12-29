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

int count (int num) {
	int ans = 0;

	while (num > 0) {
		num /= 10;
		ans++;
	}

	return ans;
}

bool comparator (const int x, const int y) {
	if (count(x) == count(y)) return x < y;
	else return count(x) < count(y);
}

void solve() {

    // code here
    
	int n; cin >> n;
	vector<int> a(n), b(n);

	for (auto &x: a) cin >> x;
	for (auto &x: b) cin >> x;

	sort(a.begin(), a.end(), comparator);
	sort(b.begin(), b.end(), comparator);

	for (auto x: a) cout << x << " "; cout << endl;
	for (auto x: b) cout << x << " "; cout << endl;


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
