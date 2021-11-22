/* hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define endl "\n"
#define ll long long
const ll  MOD = 1e9+7;

void solve(){
	int n, a, b;
	cin >> n >> a >> b;
	vector<int> le, ri;
	
	le.push_back(a); ri.push_back(b);

	if(b > a){
		for(int i = 1; i < a; i++) ri.push_back(i);
		for(int i = b+1; i <= n; i++) le.push_back(i);

		for(int i = a+1; le.size() < n/2; i++) le.push_back(i);
		for(int i = b-1; ri.size() < n/2; i--) ri.push_back(i);
	}
	else{
		if(abs(a-b) != 1){cout << -1 << endl; return;}
		for(int i = 1; i < b; i++) ri.push_back(i);
		for(int i = a+1; i <= n; i++) le.push_back(i);
	}
	

	if(le.size() != n/2 | ri.size() != n/2){cout << -1 << endl; return;}

	for(auto x: le) cout << x << " ";
	for(auto x: ri) cout << x << " "; 
	cout << endl;
	
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
