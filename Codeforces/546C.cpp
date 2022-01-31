/* Author: hyturing - Hemant Kumar Yadav */
// Read the problem statement carefully and clearly.
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	
	int n;
	cin >> n;

	int k1, k2;
	deque<int> q1, q2;

	cin >> k1;
	for(int i = 0; i < k1; i++){
		int t; cin >> t;
		q1.push_back(t);
	}

	cin >> k2;
	for(int i = 0; i < k2; i++){
		int t; cin >> t;
		q2.push_back(t);
	}

	int ans = 0;
	while(!q1.empty() & !q2.empty()){
		if(ans >= 40000000){cout << -1; return;}
		int a = q1.front(), b = q2.front();
		q1.pop_front(), q2.pop_front();
		if(a > b){q1.push_back(b); q1.push_back(a);}
		else{q2.push_back(a); q2.push_back(b);}
		ans++;
	}

	cout << ans << " ";

	if(q1.empty()) cout << 2;
	else cout << 1;

	return;
}

int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int tc = 1;
	// cin >> tc;
	for(int i = 1; i <= tc; i++){
		// cout << "Case #" << i << ": ";
		solve();
	}

	return 0;
}
