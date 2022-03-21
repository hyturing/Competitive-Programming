/**
 *	Author: hyturing
 *	Created: 20 Mar 2022 11:35:21 IST
**/

#include <bits/stdc++.h>
using namespace std; 

#define int long long
const int  M = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;

void solve(){

	// code here
	
	int a, b;
	cin >> a >> b;

	int ans = 0;

	for(int i = a; i <= b; i++){
		int prod = 1, sum = 0, num = i;
		while(num > 0){
			sum += num%10;
			prod *= (num%10);
			num /= 10;
		}

		if(prod%sum == 0) ans++;
	}

	cout << ans << "\n";

	return;
}

int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int tc = 1;
	cin >> tc;
	for(int i = 1; i <= tc; i++){
		cout << "Case #" << i << ": ";
		solve();
	}

	return 0;
}
