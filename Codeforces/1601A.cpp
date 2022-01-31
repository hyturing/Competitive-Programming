/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  M = 1e9+7;
const ll MM = 998244353;
const int N = 1e5+5;

void solve(){

	// code here
	
	int n;
	cin >> n;

	int a[n];
	for(auto &x: a) cin >> x;

	int bits[31] = {0};

	for(int i = 0; i < n; i++){
		int j = 1;
		while(a[i] > 0){
			bits[j] = bits[j] + (a[i]%2);
			a[i] /= 2;
			j++;
		}
	}

	// for(auto x: bits) cout << x << " "; cout << "\n";

	int mx = bits[0];
	for(int i = 1; i < 31; i++) mx = __gcd(mx,bits[i]);

	for(int i = 1; i <= n; i++){
		if(mx%i == 0) cout << i << " ";
	}

	cout << "\n";

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
