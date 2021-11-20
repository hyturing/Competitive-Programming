/* hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define endl "\n"
#define ll long long
const ll  MOD = 1e9+7;

void solve(){
	int s, t, x;
	cin >> s >> t >> x;

	if(t>s & x<t & x>=s){cout << "Yes"; return;}
	if(s>t & (x>=s | (x>=0&x<t))){cout << "Yes"; return;}
	cout << "No" << endl;
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
