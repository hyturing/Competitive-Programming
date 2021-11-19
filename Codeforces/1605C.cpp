/* hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define endl "\n"
#define ll long long
const ll  MOD = 1e9+7;

void solve(){
	int n;
	cin >> n;
	string s;
	cin >> s;

	int ans = INT_MAX;

	for(int i = 0; i < n-1; i++){
		if(s[i]=='a' & s[i+1]=='a') ans=min(2,INT_MAX);
	}

	for(int i = 0; i < n-2; i++){
		if(s[i]=='a' & s[i+2]=='a') ans=min(3,ans);
	}

	for(int i = 0; i < n-3; i++){
		if(s[i]=='a' & s[i+3]=='a' & ((s[i+1]=='b' & s[i+2]=='c') | (s[i+1]=='c' & s[i+2]=='b'))) ans=min(ans,4);
	}

	for(int i = 0; i < n-6; i++){
		if(s[i]=='a' & s[i+3]=='a' & s[i+6]=='a' & ((s[i+1]=='b'&s[i+2]=='b'&s[i+4]=='c'&s[i+5]=='c') | (s[i+1]=='c'&s[i+2]=='c'&s[i+4]=='b'&s[i+5]=='b'))) ans=min(ans,7);

	}

	if(ans==INT_MAX) cout << -1 << endl;
	else cout << ans << endl;
	
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
