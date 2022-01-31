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
	long long k;
	cin >> n >> k;

	vector<long long> a(n);
	for(auto &x: a) cin >> x;

	long long sum = accumulate(a.begin(), a.end(), 0LL);

	sort(a.begin(), a.end());

	long long ans = sum - k, diff = ans;


	if(sum <= k){cout << 0 << "\n"; return;}
	if(sum+1 == k){cout << 1 << "\n"; return;}

	long long suff = 0;

	for(int i = n-1; i >= 1; i--){
		suff += a[i];

		long long x;
		if(suff - (n-i)*a[0] >= diff) x = 0;
		else{
			long long div = diff-suff+(n-i)*a[0], divd = n-i+1;
			x = (div%divd == 0 ? div/divd : div/divd+1);
			x = max(x, 0LL);
		}	

		ans = min(ans, x+n-i);
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
