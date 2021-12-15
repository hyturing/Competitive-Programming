/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	int n, m;
	cin >> n >> m;
	int a[3*n+2];

	memset(a,-1,sizeof(a));

	for(int i = 2; i < 3*n+2; i+=3){
		a[i] = 0;
	}
	

	if(m >= n-1 & m <= 2*(n+1)){
		for(int i = 0; i < 3*n+2; i++){
			if(m > 0 & a[i]==0){a[i+1] = 1; m--;}
		}

		// for(auto x: a) cout << x; cout << endl;

		for(int i = 0; i < 3*n+2; i++){
			if(m > 0 & !(a[i]==1 | a[i]==0)){a[i] = 1; m--;}
		}

		for(auto x: a) if(x==1|x==0) cout << x;
	}
	else cout << -1 << "\n";	

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
