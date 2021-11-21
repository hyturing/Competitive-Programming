/* hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define endl "\n"
#define ll long long
const ll  MOD = 1e9+7;

void solve(){
	string s;
	cin >> s;
	int n = s.size();
	bool ok = false;
	for(int i = 0; i < n-2; i++){
		if(!ok & ((s[i]=='A'&s[i+1]=='B') |(s[i]=='B'&s[i+1]=='A'))) ok = true;
		if((s[i]=='A' & s[i+2]=='A' & s[i+1]=='B')|(s[i]=='B' & s[i+2]=='B' & s[i+1]=='A')){
			cout << "NO"; return;
		}
	}
	if(!ok & ((s[n-2]=='A'&s[n-1]=='B') |(s[n-2]=='B'&s[n-1]=='A'))) ok = true;

	if(ok) cout << "YES" << endl;
	else cout << "NO" << endl;
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
