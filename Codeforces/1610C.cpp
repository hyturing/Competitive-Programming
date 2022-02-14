/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  M = 1e9+7;
const ll MM = 998244353;
const int N = 1e5+5;

bool good(int len, int a[], int b[], int n){

	int cnt = 0, rich = len-1, poor = 0;

	for(int i = 0; i < n; i++){
		if(rich <= a[i] & poor <= b[i]){
			cnt++;
			rich--;
			poor++;

			if(cnt == len) break;
		}
	}

	return (cnt == len ? true : false);
}

void solve(){

	// code here
	
	int n;
	cin >> n;

	int a[n], b[n];

	for(int i = 0; i < n; i++){
		cin >> a[i] >> b[i];
	}

	int left = 0, right = n+1, mid, ans = 0;

	while(left < right){
		mid = (left+right)/2;

		if(good(mid, a, b, n)){
			ans = mid;
			left = mid+1;
		}
		else{
			right = mid;
		}
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
