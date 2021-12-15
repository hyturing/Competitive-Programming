/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	
	int n;
	cin >> n;
	vector<string> v;

	for(int i = 0; i < n-2; i++){string s; cin >> s; v.push_back(s);}

	bool ok = false;

	if(n==3){cout << v[0] << 'a' << "\n"; return;}

	for(int i = 0; i < n-3; i++){
		if(i==0) cout << v[i][0];
		if(v[i][1] == v[i+1][0]){
			cout << v[i][1];
		}
		else{
			ok = true;
			cout << v[i][1] << v[i+1][0];
		}
	}

	cout << v[n-3][1];
	if(!ok) cout << 'a';

	cout << endl;

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
