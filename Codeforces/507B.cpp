/* hyturing - Hemant Kumar Yadav */
// This was a easy problem still not able to do it. #sedlyf
#include "bits/stdc++.h"
using namespace std; 

#define endl "\n"
#define ll long long
const ll  MOD = 1e9+7;

void solve(){
	double r, x, y, X, Y;
	cin >> r >> x >> y >> X >> Y;

	double d = ((x-X)*(x-X)+(y-Y)*(y-Y));
	d = sqrt(d);
	cout << ceil(d/(2*r));
	
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
