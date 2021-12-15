/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	int n, k;
	cin >> n >> k;

	vector<int> p(n);
	for(auto &x: p) cin >> x;

	int l(-1), r(-1);
	for(int i = 1; i < n+1; i++){
		if(p[i-1] != i){l = i; break;}
	}
	for(int i = n; i > 0; i--){
		if(p[i-1] != i){r = i; break;}
	}

	if(l == -1 & r == -1){cout << 0 << "\n"; return;}
	if(l == -1 | r == -1 | (r-l+1 <= k)){cout << 1 << "\n"; return;}

	bool a = false, b = false;
	for(int i = 0; i < k; i++){
		if(p[i] == 1){a = true; break;}
	}

	// cout << "a " << a << endl; 

	for(int i = n-k; i < n; i++){
		if(p[i] == n){b = true; break;}
	} 

	// cout << "b " << b << endl;

	if(a==0 && b==0) cout << 3 << "\n";
	else cout << 2 << "\n";

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
