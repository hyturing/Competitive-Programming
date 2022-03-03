/**
 *        Author: hyturing
 *        Created: 24 Feb 2022 00:48:27 IST
 *        Description: 
**/

#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  M = 1e9+7;
const ll MM = 998244353;
const int N = 1e5+5;

void solve(){

    // code here

    int n, p;
    cin >> n >> p;
  
    long long a[n], f[p];

    f[0] = 1, f[1] = 1;
    for(int i = 2; i < p; i++){
    	f[i] = (f[i-1]+f[i-2]);
    	if(f[i] >= M) f[i] %= M;
    }
    for(int i = 1; i < p; i++){
    	f[i] += f[i-1];
    	if(f[i] >= M) f[i] %= M;
    }

    set<long long> s;

    for(auto &x: a){
        cin >> x;
    }

    sort(a, a+n);

    for(auto x: a){
    	bool present = false;
    	long long var = x;

    	while(var > 0){
    		if(var%2 == 1){
    			var /= 2;
    		}
    		else{
    			if(var%4) break;

    			var /= 4;
    		}

    		if(s.find(var) != s.end()){
    			present = true;
    			break;
    		}	
    	}

    	if(!present) s.insert(x);
    }

    long long ans = 0;

    for(auto x: s){
    	long long var = x;
    	int cnt = 0;
    	while(var > 0){var /= 2; cnt++;}
    	var = p-cnt;
    	// cout << x << endl;
    	if(var < 0) continue;
    	ans = (ans+f[var]);
    	if(ans > M) ans %= M;
    }

    cout << ans << "\n";

    return;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1;
    // cin >> tc;
    for(int i = 1; i <= tc; i++){
        // cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}