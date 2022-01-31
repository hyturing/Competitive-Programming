/* Author: hyturing - Hemant Kumar Yadav */
// Read the problem statement carefully and clearly.
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

bool good(int tu, int td, int tl, int tr, int n){
	if(tu >= 0 & tr >= 0 & tl >= 0 & td >= 0 & td <= n & tu <= n & tl <= n & tr <= n) return true;
	return false;
}

void solve(){

	// code here
	
	int n, u, r, l, d;
	cin >> n >> u >> r >> d >> l;

	int tu = u, tr = r, td = d, tl = l;

	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			for(int k = 0; k < 2; k++){
				for(int m = 0; m < 2; m++){
					if(i==1){tu--, tl--;}
					if(j==1){tu--, tr--;}
					if(k==1){td--, tl--;}
					if(m==1){td--, tr--;}
					if(good(tu, td, tl, tr, n-2)){cout << "YES\n"; return;}
					tu = u, tr = r, tl = l, td = d;
				}
			}
		}
	}

	cout << "NO\n";

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
