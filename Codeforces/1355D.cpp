/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	int n, s;
	cin >> n >> s;

	if(n > s/2){cout << "NO\n"; return;}

	int a[n];
	for(auto &x: a) x = 1;

	a[n-1] += s-n;
	cout << "YES\n";
	for(auto x:a) cout << x << " "; cout << "\n";
	cout << s/2;

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
