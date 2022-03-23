/**
 *	Author: hyturing
 *	Created: 22 Mar 2022 20:48:23 IST
**/

#include <bits/stdc++.h>
using namespace std; 

#define int long long
const int  MOD = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const int INF = 1e18;

void solve(){

	// code here
	
	int n;
	cin >> n;

	string s;
	cin >> s;

	int cnt = 0, sz = 0;

	if(n == 1){
		cout << 0 << " " << 1 << "\n";
		return;
	}
	else{

		bool ok = false;

		for(int i = 0; i < n; i++){

			if(i+1 < n){
				if(s[i] == ')' & s[i+1] == '('){
					bool found = false;
					int len = 1;
					for(int j = i+1; j < n; j++){
						if(s[j] == ')'){
							found = true;
							cnt++;
							len++;
							i = j;
							sz += len;
							break;
						}
						else len++;
					}

					if(!found) break;
				}
				else{
					cnt++;
					i++;
					sz += 2;
				}
			}		
		}
	}

	cout << cnt << " " << n-sz << "\n";

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