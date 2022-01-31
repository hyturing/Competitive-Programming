/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;


void solve(){

	// code here
	
	int n, m, q;
	cin >> n >> m;

	int arr[n+1] = {0}, cnt = n;

	for(int i = 0; i < m; i++){
		int a, b;
		cin >> a >> b;

		if(arr[min(a,b)] == 0){
			cnt--;
		}
		
		arr[min(a,b)]++;

	}

	cin >> q;
	while(q--){
		int t;
		cin >> t;
		if(t == 1){
			int a, b;
			cin >> a >> b;
			if(arr[min(a,b)] == 0){
				cnt--;
			}
			arr[min(a,b)]++;
		}
		
		if(t == 2){
			int a, b;
			cin >> a >> b;
			arr[min(a,b)]--;

			if(arr[min(a,b)] == 0) cnt++;
		}
		if(t == 3){
			cout << cnt << "\n";
		}
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
	// cin >> tc;
	for(int i = 1; i <= tc; i++){
		// cout << "Case #" << i << ": ";
		solve();
	}

	return 0;
}