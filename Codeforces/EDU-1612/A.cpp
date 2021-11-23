/* hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define endl "\n"
#define ll long long
const ll  MOD = 1e9+7;

void solve(){
	int x, y;
	cin >> x >> y;
	for(int i = 0; i <= max(x,y); i++){
		for(int j = 0; j <= max(x,y); j++){
			if(i+j == abs(x-i)+abs(y-j)){cout << i << " " << j << endl; return;}
		}
	}

	cout << -1 << " " << -1 << endl;

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
