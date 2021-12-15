/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	int n;
	cin >> n;
	int a[n], f[n]={0}, d[]={2,3,5,7,11,13,17,19,23,29,31};
	for(auto &x: a) cin >> x;

	int m = 1;
	for(int i = 0; i < 11; i++){
		bool ok = false;
		for(int j = 0; j < n; j++){
			if(a[j]%d[i] == 0) if(f[j]==0){f[j] = m; ok = true;}
		}
		if(ok) m++;
	}

	cout << m-1 << "\n";
	for(auto x: f) cout << x << " "; cout << "\n";

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
