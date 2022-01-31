/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	
	ll n;
	cin >> n;

	ll ans = 0;
	
	while(true){
		if(n == 0) break;
		if(n&1){
			ans++;
			n--;
			if(n==0) break;
			if(n%4 == 0 & n != 4){
				n--;
				if(n==0) break;
			}
			else{
				n /= 2;
			}
		}
		else{
			if(n%4 == 0 & n != 4){
				n -= 2;
				ans++;
			}
			else{
				ans += n/2;
				n /= 2;
				n--;
				if(n==0) break;
			}
		}
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
