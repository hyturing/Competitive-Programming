/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	
	int n;
	cin >> n;

	int a[n], sum = 0;

	for(auto &x: a){
		cin >> x;
		sum += x;
	}

	for(int i = n; i > 0; i--){
		int needSum, currSum = 0;
		if(sum%i == 0){
			needSum = sum/i;
		}
		else continue;

		bool ok = true;

		for(int j = 0; j < n; j++){
			currSum += a[j];
			if(currSum > needSum){
				ok = false;
				break;
			}
			if(currSum == needSum){
				currSum = 0;
			}
		}

		if(ok){
			cout << n-i << "\n";
			return;
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
	cin >> tc;
	for(int i = 1; i <= tc; i++){
		// cout << "Case #" << i << ": ";
		solve();
	}

	return 0;
}
