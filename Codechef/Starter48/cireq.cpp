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
    int a[n]; for (auto &x: a) cin >> x;

   	sort(a, a+n);

   	int cur = 1, ans = 1;

    priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(1);

   	for (int i = 0; i < n; i++) {
   		if (a[i] >= pq.top()) {
   			int curr = pq.top();
            pq.pop();
            curr++;
            pq.push(curr);
   		}
   		else {
   			pq.push(1);
            i--;
   		}
   	}

   	cout << pq.size() << "\n";

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

