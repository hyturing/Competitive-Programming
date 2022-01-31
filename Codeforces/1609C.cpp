/* Author: hyturing - Hemant Kumar Yadav */
// Read the problem statement carefully and clearly.
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

vector<int> prime(1000001);

void calc(){
	prime[1] = 1;
	for(int i = 2; i <= 1000000; i++){
		if(prime[i]) continue;
		for(int j = 2*i; j <= 1000000; j += i) prime[j] = 1;
	}

}


// bool prime(int n){
// 	for(int i = 2; i*i <= n; i++){
// 		if(n%i == 0) return false;
// 	}

// 	if(n == 1) return false;

// 	return true;
// }

void solve(){

	// code here
	
	int n, e;
	cin >> n >> e;

	vector<int> a(n);
	for(auto &x: a) cin >> x;

	set<int> index;
	for(int i = 0; i < n; i++) if(a[i] == 1) index.insert(i);

	ll ans = 0;
	for(int i = 0; i < n; i++){
		ll front = 0, back = 0;
		if(prime[a[i]] == 0){
			ll it = i;
			while(index.find(it+e) != index.end()){front++; it += e;}
			it = i;
			while(index.find(it-e) != index.end()){back++; it -= e;}
		}
		
		// if(prime(a[i])) cout << a[i] << " " << front << " " << back << "\n";

		if(front == 0 | back == 0){ans += front+back; continue;}

		ll len = min(front,back)+1;
		ans += (len*len+len)-len-1+abs(front-back)*(len);
	
	}

	cout << ans << "\n";

	return;
}

int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	calc();
	int tc = 1;
	cin >> tc;
	for(int i = 1; i <= tc; i++){
		// cout << "Case #" << i << ": ";
		solve();
	}

	return 0;
}
