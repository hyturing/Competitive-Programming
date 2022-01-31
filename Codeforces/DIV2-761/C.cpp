/* Author: hyturing - Hemant Kumar Yadav */
// Read the problem statement carefully and clearly.
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	
	ll n;
	cin >> n;

	vector<ll> a(n);
	vector<bool> ok(n+1);
	for(auto &x: a) cin >> x;

	for(int i = 0; i < n; i++){
		if(a[i] <= n){
			if(ok[a[i]] == 0){ok[a[i]] = 1; a[i] = -1;}
		}
	}

	// for(auto x: ok) cout << x << " "; cout << endl;
	// for(auto x: a) cout << x << " "; cout << endl;

	sort(a.begin(), a.end());
	int index;
	for(int i = 0; i < n; i++){
		if(a[i] > 0){index = i; break;}
	}

	// for(auto x: ok) cout << x << " "; cout << endl;
	// for(auto x: a) cout << x << " "; cout << endl;


	int ans = 0;
	for(int i = 1; i <= n; i++){
		if(ok[i] == 0){
			if(a[index]-i > i){ans++; index++;}
			else{cout << -1 << "\n"; return;}
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
