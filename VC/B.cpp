/**
 *    Author: hyturing
 *    Created: 
**/

#include <bits/stdc++.h>
using namespace std; 

#define int long long
const int  MOD = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const int INF = 1e18;

void solve() {

    // code here
    
	int n; cin >> n;
	int a[n];
	for (auto &x: a) cin >> x;
	
	vector<int> s, b;
	
	sort(a, a+n);
	
	for (int i = 0; i < n - (n+1)/2; i++) {
		s.push_back(a[i]);
	}
	
	for (int i = n-(n+1)/2; i < n; i++) {
		b.push_back(a[i]);
	}
	
	vector<int> arr;
	
	for (int i = 0, j = 0; i < b.size(); i++, j++) {
		if (j >= s.size()) {
			arr.push_back(b[i]);
			continue;
		}
		
		arr.push_back(b[i]);
		arr.push_back(s[j]);
	} 
	
	int ans = 0;
	
	for (int i = 1; i < n-1; i++) {
		if (arr[i] < arr[i-1] and arr[i] < arr[i+1]) ans++;
	}
	
	cout << ans << "\n";
	
	for (auto x: arr) cout << x << " ";

    return;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1;
//    cin >> tc;
    
    for (int i = 1; i <= tc; i++) {
        // cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}
