/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	int n, k;
	cin >> n >> k;

	string s;
	cin >> s;

	int w = 0, l = 0;

	int ans = 0;

	for(int i = 0; i < n; i++){
		if(s[i] == 'W') w++;
		else l++;
	}

	k = min(l,k);

	for(int i = 0; i < n; i++){
		if(s[i] == 0){
			if(s[i] == 'W') ans++;
			continue;
		}
		if(s[i] == 'W'){
			if(s[i-1] == 'W') ans += 2;
			else ans++;
		}
	}


	if(w == 1 | w == 0){
		if(w == 1) ans += 2*k;
		if(w == 0 & k > 0) ans += (k-1)*2+1;
	}
	else{
		vector<int> pos;
		int cur = 0;
		bool ok = false;
		for(int i = 0; i < n; i++){
			if(s[i] == 'W') ok = true;
			if(ok & s[i] == 'L'){
				cur++;
			}
			if(ok & s[i] == 'W'){
				if(cur > 0) pos.push_back(cur);
				cur = 0;
				ok = true;
			}
		}

		sort(pos.begin(), pos.end());
		// cout << "k = " << k << endl;
		// for(auto x: pos) cout << x << " "; cout << "\n";

		for(int i = 0; i < pos.size(); i++){
			if(k >= pos[i] & k > 0){
				k -= pos[i];
				ans += 2*pos[i]+1;
			}
		}

		ans += 2*k;
	}

	cout << ans << "\n";


	return;
}

/* 
	-> Read the problem statement carefully and clearly.

	-> Think Brute Force first.
	
	-> While practice if WA think first don't see test cases.
	
	-> If code too long logic maybe incorrect. 
*/

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
