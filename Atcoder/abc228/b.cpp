/* hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define endl "\n"
#define ll long long
const ll  MOD = 1e9+7;

void solve(){
	int n, x;
	cin >> n >> x;
	int a[n+1];
	for(int i=1; i<n+1; i++) cin >> a[i];
	int cnt(1);
	vector<bool> used(n+1);
	used[x]=true;
	while(true){
		int k = a[x];
		if(used[k]) break;
		used[k] = true;
		cnt++;
		x = k;
	}

	cout << cnt;
	
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
