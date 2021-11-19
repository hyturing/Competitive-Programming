/* hyturing - Hemant Kumar Yadav */
// Do this problem using bfs
#include "bits/stdc++.h"
using namespace std; 

#define endl "\n"
#define ll long long
const ll  MOD = 1e9+7;

void solve(){
	int n, m;
	cin >> n >> m;

	int cnt(0);

	while(n!=m){
		if(m > n && m%2 == 0){m/=2; cnt++;}
		else{m++; cnt++;} 
	}

	cout << cnt << endl;
		
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
