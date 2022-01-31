/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	
	ll a, b, c;
	cin >> a >> b >> c;

	vector<ll> arr;

	if((2*b-c)%a == 0){
		arr.push_back((2*b-c)/a);
	}

	if((2*b-a)%c == 0){
		arr.push_back((2*b-a)/c);
	}

	if((a+c)%(2*b) == 0){
		arr.push_back((a+c)/(2*b));
	}

	bool ok = false;

	for(auto x: arr){
		if(x > 0){ok = true; break;}
	}

	if(ok) cout << "YES\n";
	else cout << "NO\n";

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
