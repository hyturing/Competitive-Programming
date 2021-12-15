/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	
	int n;
	cin >> n;
	string s;
	cin >> s;

	int cnt(0);
	for(auto &x: s){
		cnt += (x == '*' ? 1 : 0);
	}

	int pos = -1, curr = -1;
	for(int i = 0; i < n; i++){
		if(s[i] == '*'){
			curr++;
			if(curr == cnt/2){
				pos = i;
			}
		}
	}

	curr = pos-cnt/2;
	ll ans = 0;
	for(int i = 0; i < n; i++){
		if(s[i] == '*'){
			ans += abs(curr-i);
			curr++;
		}
	}

	cout << ans << "\n";
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
