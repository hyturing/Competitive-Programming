/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	
	int n, k;
	cin >> n >> k;

	string m;
	cin >> m;

	sort(m.begin(), m.end());

	int d = 0, s = 0;

	for(int i = 0; i < n; i++){
		if(i == n-1){
			s++;
			continue;
		}
		if(m[i] == m[i+1]){
			d++;
			i++;
		}
		else s++;
	}

	int temp = d;	
	d /= k;

	if(d == 0){
		cout << 1 << "\n";
		return;
	}

	if(n - d*k*2 >= k) cout << 2*d+1 << "\n";
	else cout << 2*d << "\n";

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
