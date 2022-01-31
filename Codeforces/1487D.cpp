/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  M = 1e9+7;
const ll MM = 998244353;
const int N = 1e5+5;

vector<long long> v;

void oneTime(){
	for(long long i = 2; i <= 1e5 ; i++){
		long long j = ((i*i)-1)/2;
		long long k = i*i + j*j;
		long long sr = sqrt(k);
		
		if(j > 1e9 | sr > 1e9) continue;

		if((sr*sr) == (i*i + j*j)) v.push_back(sr);
		
	}
}

void solve(){

	// code here
	
	long long n;
	cin >> n;

	auto it = lower_bound(v.begin(), v.end(), n);

	if(it == v.begin()){
		if(*it <= n) cout << 1 << "\n";
		else cout << 0 << "\n";
		return;
	}

	if(*it > n){
		cout << it-v.begin() << "\n";
		return;
	}
	else if(*it == n){
		cout << it-v.begin()+1 << "\n";
		return;
	}

	if(it == v.end()) cout << v.size() << "\n";
	
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

	oneTime();

	int tc = 1;
	cin >> tc;
	for(int i = 1; i <= tc; i++){
		// cout << "Case #" << i << ": ";
		solve();
	}

	return 0;
}
