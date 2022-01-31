/* Author: hyturing - Hemant Kumar Yadav */
// Read the problem statement carefully and clearly.
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

bool ok(string a, string b){

}

void solve(){

	// code here
	
	ll a, s;
	cin >> a >> s;

	string b;
	bool ok = true;
	while(a > 0 & s > 0){
		int x = a%10, y = s%10;
		if(y >= x){
			b += '0'+(y-x);
			a /= 10, s /= 10;
		}
		else{
			s /= 10;
			if(s%10 == 1){
				b += '0' + (y-x+10);
				a /= 10; s /= 10;
			}
			else{ok = false; break;}
		}
	}
	reverse(b.begin(), b.end());
	if(a > 0) ok = false;
	if(s > 0){
		b = to_string(s) + b; 
	}

	if(ok){
		while(b.size() > 0){
			if(b[0] == '0') b.erase(b.begin());
			else break;
		}

		for(auto x: b) cout << x; cout << "\n";
	}
	else cout << -1 << "\n";

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
