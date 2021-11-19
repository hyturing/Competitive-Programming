/* hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define endl "\n"
#define ll long long
const ll  MOD = 1e9+7;

void solve(){
	string s;
	cin >> s;

	int ans = INT_MAX;
	int len  = s.size();

	// This idea goes in n^2 hence very slow there is a better approach discussed in methd-2.
	// Method-1
	// for(int i=0; i<len; i++){
	// 	int cnt=0;
	// 	for(int j=0; j<len; j++){
	// 		if(s[j]=='0' && j<i) cnt++;
	// 		if(s[j]=='1'&& j>=i) cnt++;
	// 	}
	// 	ans = min(ans,cnt);
	// 	cnt=0;
	// 	for(int j=0; j<len; j++){
	// 		if(s[j]=='1'&& j<i) cnt++;
	// 		if(s[j]=='0' && j>=i) cnt++;
	// 	}
	// 	ans = min(ans,cnt);
	// }

	// int cnt=0;
	// for(int i=0; i<len; i++) if(s[i]=='0') cnt++;
	// ans = min(ans,cnt); cnt=0;
	// for(int i=0; i<len; i++) if(s[i]=='1') cnt++;
	// ans = min(ans,cnt);

	// Method-2
	// Work in O(n)
	int pre0=0, pre1=0, suff0=0, suff1=0;

	for(auto c: s){ 
		if(c=='1') suff1++; 
		else suff0++;
	}

	for(int i=0; i<len; i++){
		if(s[i]=='0')pre0++; 
		else pre1++;
		ans = min(ans, pre0+suff1-pre1);
		ans = min(ans, pre1+suff0-pre0);
	}

	cout << ans << endl;
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
