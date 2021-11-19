/* hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define endl "\n"
#define ll long long
const ll  MOD = 1e9+7;

void solve(){
	ll x, y;
	cin >> x >> y;

	if(y%x==0){cout << min(x,y) << endl; return;}
	
	if(y>x){
		if(x>=y/2) cout << (x+y)/2 << endl;
		else cout << y-(y%x)/2 << endl;
	}
	else cout << x+y << endl;
	
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


