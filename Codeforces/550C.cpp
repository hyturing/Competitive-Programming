/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here

	string s;
	cin >> s;

	int n = s.size();

	for(int i = 0; i < n; i++){
		if((s[i]-'0')%8 == 0){cout << "YES\n" << s[i]; return;}
	}

	for(int i = 0; i < n; i++){
		if(s[i]=='0') continue;
		for(int j = i+1; j < n; j++){
			int m;
			m = (s[i]-'0')*10 + (s[j]-'0');
			if(m%8 == 0){cout << "YES\n" << m; return;}
		}
	}
	

	for(int i = 0; i < n; i++){
		if(s[i]=='0') continue;
		for(int j = i+1; j < n; j++){
			for(int k = j+1; k < n; k++){
				int m;
				m = (s[i]-'0')*100+(s[j]-'0')*10+(s[k]-'0');
				if(m%8==0){cout << "YES\n" << m; return;}
			}
		}
	}

	cout << "NO";
	
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
