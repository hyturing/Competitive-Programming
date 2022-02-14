/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  M = 1e9+7;
const ll MM = 998244353;
// const int N = 1e5+5;

const int N = 1001;
vector<int> steps(N, INT_MAX);

void preSolve(){

	steps[1] = 0;

	for(int i = 1; i < N; i++){
		for(int j = 1; j <= i; j++){
			int x = i+i/j;
			if(x < N) steps[x] = min(steps[x], steps[i]+1);
		}
	}
}

void solve(){

	// code here
	
	int n, k;
	cin >> n >> k;

	int b[n], c[n];

	for(auto &x: b) cin >> x;
	for(auto &x: c) cin >> x;

	int sum = 0;

	for(auto x: b) sum += x;

	k = min(k,sum);
	
	

	return;
}

int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	preSolve();

	int tc = 1;
	cin >> tc;
	for(int i = 1; i <= tc; i++){
		// cout << "Case #" << i << ": ";
		solve();
	}

	return 0;
}
