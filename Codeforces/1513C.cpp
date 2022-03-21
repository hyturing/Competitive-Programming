/**
 *	Author: hyturing
 *	Created: 18 Mar 2022 02:58:12 IST
**/

#include <bits/stdc++.h>
using namespace std; 

#define int long long
const int  M = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;

const int MAX = 2e5+100;
int dp[MAX];

void preSolve(){
    for(int i = 0; i < 10; i++){
        dp[i] = 1;
    }
    
    for(int i = 10; i < MAX; i++) dp[i] = (dp[i-9]+dp[i-10])%M;
    
    return;
}

void solve(){

	// code here
	
	int n, m;
	cin >> n >> m;
	
	int ans = 0;
	
	while(n > 0){
	    int x = n%10;
	    
	    ans = (ans+dp[x+m])%M;
	    
	    n /= 10;
	}
    
    cout << ans << "\n";
        
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
