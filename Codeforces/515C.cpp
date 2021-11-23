/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define endl "\n"
#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	int n;
	cin >> n;

	string s;
	cin >> s;

	string ans="";
	for(auto x: s){
		if(x=='2'){ans+="2";}
		if(x=='3'){ans+="3";}
		if(x=='4'){ans+="223";}
		if(x=='5'){ans+="5";}
		if(x=='6'){ans+="53";}
		if(x=='7'){ans+="7";}
		if(x=='8'){ans+="7222";}
		if(x=='9'){ans+="7332";}
	}

	sort(ans.begin(), ans.end());
	reverse(ans.begin(), ans.end());

	cout << ans;
	
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
