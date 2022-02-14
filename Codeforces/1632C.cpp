/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  M = 1e9+7;
const ll MM = 998244353;
const int N = 1e5+5;

void solve(){

	// code here
	
	int a, b;
	cin >> a >> b;

	int ans = b-a;

	for(int i = a; i <= b; i++){
		bitset<21> b1(0), a1(i), bb(b);

		for(int j = 20; j >= 0; j--){
			if(a1[j] == 1 & bb[j] == 0){
				b1[j] = 1;
				break;
			}
			else b1[j] = a1[j]|bb[j];
		}

		int b11 = b1.to_ulong();

		ans = min(ans, i-a-b+(i|b11)+1);
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
		// cout << "Case #" << i << ": ";
		solve();
	}

	return 0;
}
