/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  M = 1e9+7;
const ll MM = 998244353;
const int N = 1e5+5;

void solve(){

	// code here
	
	int n, m;
	cin >> n >> m;

	string s;
	cin >> s;

	vector<char> h, v;

	for(auto x: s){
		(x == 'R' | x == 'L' ? h : v).push_back(x);
	}

	int a = 0, b = 0, left = 0, right = 0, sum = 0, up = 0, down = 0;

	for(auto x: h){
		sum += (x == 'R' ? 1 : -1);
		if(sum < 0){
			if((left <= -sum) & (right+1-sum <= m)) left = -sum;
		}
		else if(sum > 0){
			if((right <= sum) & (left+sum+1 <= m)) right = sum;
		}
	}
	
	sum = 0;

	for(auto x: v){
		sum += (x == 'U' ? 1 : -1);
		if(sum < 0){
			if(down <= -sum & up-sum+1 <= n) down = -sum;
		}
		else if(sum > 0){
			if(up <= sum & sum+down+1 <= n) up = sum;
		}
	}

	// cout << left << " " << right << " " << up << " " << down << endl;

	if(left > right) b = left+1;
	else b = m-right;

	if(down > up) a = n-down;
	else a = up+1;

	cout << a << " " << b << "\n";
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
