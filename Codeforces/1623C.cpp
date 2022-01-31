/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  M = 1e9+7;
const ll MM = 998244353;
const int N = 1e5+5;

bool good(int h[], int n, int mx){

	vector<int> curr;
	for(int i = 0; i < n; i++) curr.push_back(h[i]);

	for(int i = n-1; i >= 2; i--){
		if(curr[i] < mx) return false;

		int d = min(h[i] , curr[i]-mx)/3;
		curr[i-1] += d;
		curr[i-2] += 2*d;
	}

	// for(auto x: curr) cout << x << " "; cout << endl;

	return (curr[0] >= mx & curr[1] >= mx);
}

void solve(){

	// code here
	
	int n;
	cin >> n;

	int h[n];
	for(auto &x: h) cin >> x;

	int r = 1e9, l = 0, mid, ans;

	while(r > l){
		mid = (l+r)/2;

		if(good(h, n, mid)){
			ans = mid;
			l = mid+1;
		}
		else r = mid;
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
