/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  M = 1e9+7;
const ll MM = 998244353;
const int N = 1e5+5;

void solve(){

	// code here
	
	int n, l, r;
	cin >> n >> l >> r;

	vector<int> L, R;

	for(int i = 0; i < n; i++){
		int x; cin >> x;
		(i < l ? L : R).push_back(x);
	}

	sort(L.begin(), L.end());
	sort(R.begin(), R.end());

	int i = 0, j = 0;

	while(i < l & j < r){
		if(L[i] == R[j]){
			L[i] = -1, R[j] = -1;
			i++, j++;
		}
		else if(L[i] < R[j]){
			i++;
		}
		else j++;
	}

	sort(L.begin(), L.end());
	sort(R.begin(), R.end());

	int cntL = 0, cntR = 0, ans = 0;

	for(auto x: L) cntL += (x > -1 ? 1 : 0);
	for(auto x: R) cntR += (x > -1 ? 1 : 0);

	// cout << cntL << " " << cntR << endl;

	if(cntL == cntR){
		cout << cntL << "\n";
		return;
	}
	else if(cntL < cntR){
		for(int x = 0; x < r-1; x++){
			if(cntL == cntR) break;
			if(R[x] == R[x+1] & R[x] > -1){
				ans++, x++, cntR -= 2;
			}
		}

		cout << ans+cntR << "\n";
		return;
	}
	else{
		for(int x = 0; x < l-1; x++){
			if(cntL == cntR) break;
			if(L[x] == L[x+1] & L[x] > -1){
				ans++, x++, cntL -= 2;
			}
		}

		cout << ans+cntL << "\n";
		return;
	}

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
