/**
 *	Author: hyturing
 *	Created: 26 Feb 2022 22:37:42 IST
 *	Description: 
**/

#include <bits/stdc++.h>
using namespace std; 

#define ll long long
const ll  M = 1e9+7;
const ll MM = 998244353;
const int N = 1e5+5;

void solve(){

	// code here
	
	int n;
	cin >> n;

	int a[n], b[n];
	map<int, int> m;

	for(auto &x: a){
		cin >> x;
		m[x]++;
	}
	
	int ans = m.size();

	set<int> req;

	for(int i = 1; i <= n; i++){
		if(m.find(i) == m.end()) req.insert(i);
	}

	for(int i = n-1; i >= 0; i--){
		if(m[a[i]] == 1) b[i] = a[i];
		else{
			if(*req.begin() == i+1){
				b[i] = a[i];
				continue;
			}

			b[i] = *req.begin();
			req.erase(req.begin());
			m[a[i]]--;
		}
	}

	cout << ans << "\n";
	for(auto x: b) cout << x << " "; cout << "\n";

	return;
}

int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int tc = 1;
	cin >> tc;
	for(int i = 1; i <= tc; i++){
		// cout << "Case #" << i << ": ";
		solve();
	}

	return 0;
}
