/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define endl "\n"
#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	int n, k;
	cin >> n >> k;

	vector<int> a(n);
	set<int> s;

	for(auto &x: a){cin >> x; s.insert(x);}


	if(s.size() > k){cout << -1 << endl; return;}

	vector<int> ans;

	for(auto x: s) ans.push_back(x);

	int i = 1;
	while(ans.size() < k){
		if(s.find(i) == s.end()) ans.push_back(i);
		else i++;
	}

	cout << n*k << endl;
	for(int i = 0; i < n; i++) for(auto x: ans) cout << x << " "; 

	cout << endl;

	// if(s.size() == k){
	// 	for(auto i: s) ans.push_back(i);
	// 	cout << n*k << endl;
	// 	for(int i = 0; i < n; i++) for(auto x: ans){cout << x << " ";}
	// 	cout << endl;
	// 	return;
	// }
	// else{
	// 	for(int i = 0; i < n; i++){
	// 		for(int j = 1; j <= k; j++)ans.push_back(j);
	// 	}
	// }	
	// cout << ans.size() << endl;
	// for(auto x: ans) cout << x << " ";
	// cout << endl;

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
