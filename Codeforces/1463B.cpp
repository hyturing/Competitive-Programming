/* hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define endl "\n"
#define ll long long
const ll  MOD = 1e9+7;

void solve(){
	int n;
	cin >> n;

	ll a[n];

	for(auto &c: a) cin >> c;

	ll odd=0, even=0;

	for(int i = 0; i < n; i++){
		if(i&1){
			odd+=a[i];
		}
		else{
			even+=a[i];
		}
	}

	if(odd>=even){
		for(int i = 0; i < n; i++) if(i%2==0) a[i]=1;
	}
	else for(int i = 0; i < n; i++) if(i&1) a[i]=1;
		
	for(auto c: a) cout << c << " "; cout << endl;
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
