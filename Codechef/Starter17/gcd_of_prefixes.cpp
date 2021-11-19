/* hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define endl "\n"
#define ll long long
const ll  MOD = 1e9+7;

void solve(){
	int n;
	cin >> n;

	ll b[n], a[n];
	for(auto &c: b) cin >> c;

	a[0] = b[0];
	for(int i = 1; i < n; i++){
		if(a[i-1]%b[i] == 0) a[i] = b[i];
		else{cout << -1 << endl; return;}
	}

	for(auto &c: a) cout << c << " ";
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
