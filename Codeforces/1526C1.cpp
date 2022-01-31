/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

// #define ll long long
const long long  M = 1e9+7;
const long long MM = 998244353;
const int N = 1e5+5;

void solve(){

	// code here
	
	int n;
	cin >> n;

	long long a[n], sum = 0, cnt = 0;

	priority_queue<long long, vector<long long>, greater<long long>> mi;

	for(auto &x: a) cin >> x;

	for(int i = 0; i < n; i++){
		if(a[i] < 0){
			mi.push(a[i]);
		}
		if(sum + a[i] >= 0){
			cnt++;
			sum += a[i];
		}
		else{
			sum += a[i];
			sum -= mi.top();
			mi.pop();
		}
	}

	cout << cnt << "\n";

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
	// cin >> tc;
	for(int i = 1; i <= tc; i++){
		// cout << "Case #" << i << ": ";
		solve();
	}

	return 0;
}
