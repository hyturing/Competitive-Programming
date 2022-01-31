/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  M = 1e9+7;
const ll MM = 998244353;
const int N = 1e5+5;
const ll INF = 1e18;

void solve(){

	// code here
	
	long long n;
	cin >> n;

	long long c[n];
	for(auto &x: c) cin >> x;

	long long even = INF, odd = INF, cnt1 = 0, cnt2 = 0, sum1 = 0, sum2 = 0, ans = INF;

	for(int i = 0; i < n; i++){
		if(i&1){
			odd = min(odd, c[i]);
			cnt1++;
			sum1 += c[i];
		}
		else{
			even = min(even, c[i]);
			cnt2++;
			sum2 += c[i];
		}

		if(i > 0) ans = min(ans, (sum1+(n-cnt1)*odd + sum2+(n-cnt2)*even));
		// i > 0 because at i == 0 integer overflow can occur
		// this question has some amazing observations
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
