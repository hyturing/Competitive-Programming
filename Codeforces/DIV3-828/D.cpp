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

int calc (int k) {
	int cnt = 0LL;

    while (k%2LL == 0LL) {
    	cnt++;
    	k /= 2LL;
    }

    return cnt;
}

void solve() {

    // code here
    
    int n; cin >> n;
    vector<int> a(n);

    for (auto &x: a) cin >> x;

    int sum = 0;
    vector<int> v;

    for (int i = 0; i < n; i++) {
    	sum += calc(a[i]);
    	int c = calc(i+1);

    	if (c != 0) v.push_back(c);
    }

    if (sum >= n) cout << 0 << endl;
    else {
        int need = n - sum;
        sort(v.rbegin(), v.rend());
        
        int cnt = 0;

        for (int i = 0; i < v.size(); i++) {
            if (need >= v[i]) {
                need -= v[i];
                cnt++;
            } 
        }

        if (need == 0) cout << cnt << endl;
        else cout << -1 << endl;
        
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
