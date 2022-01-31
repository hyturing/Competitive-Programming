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
	cin >> n;

	vector<int> q(n);
	for(auto &x: q) cin >> x;

	map<int,int> m;

	for(int i = 0; i < n; i++){
		if(m.find(q[i]) == m.end()){
			m[q[i]] = i;
		}
	}

	vector<int> mi(n, 0), mx(n, 0), left;

	for(int i = 1; i <= n; i++){
		if(m.find(i) == m.end()) left.push_back(i);
	}

	for(auto x: m){
		mi[x.second] = x.first;
		mx[x.second] = x.first;
	}

	int j = 0;
	for(int i = 0; i < n; i++){
		if(mi[i] == 0){
			mi[i] = left[j], j++;
		}
	}

	priority_queue<int> pq;
	j = 0;
	int len = left.size();

	if(len == 0){
		for(auto x: mi) cout << x << " "; cout << "\n";
		for(auto x: mi) cout << x << " "; cout << "\n";
		return;
	}

	for(int i = 0; i < n; i++){
		if(mx[i] == 0){
			mx[i] = pq.top();
			pq.pop();
		}
		else{
			while(left[j] < mx[i] & j < len){
				pq.push(left[j]);
				j++;
			}
		}
	}

	for(auto x: mi) cout << x << " "; cout << "\n";
	for(auto x: mx) cout << x << " "; cout << "\n";

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
