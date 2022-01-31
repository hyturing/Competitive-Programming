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

	int num = a[n-1], ans = 0, cnt = 0, it = n-1;

	// while(it >= 0){
	// 	if(a[it] == num){
	// 		cnt++;
	// 		it--;
	// 	}
	// 	else break;
	// }
	
	// for(int i = n-2; i >= 0; i++){
	// 	if(a[i] == num){
	// 		cnt++;
	// 		it--;
	// 	}
	// 	else break;
	// }

	// cout << cnt << " " << it << endl;

	while(it >= 0){
		// bool ok = true;
		// for(int i = 0; i < cnt & it >= 0; i++){
		// 	if(a[it] == num) ok &= true;
		// 	else ok &= false;
		// 	it--;
		// }
		// if(!ok) ans++;
		// it -= cnt;
		while(it >= 0){
			if(a[it] == num){
				cnt++;
				it--;
			}
			else break;
		}

		if(it >= 0) ans++;
		it -= cnt;
		cnt *= 2;
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
