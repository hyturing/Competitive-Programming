/**
 *	Author: hyturing
 *	Created: 15 Mar 2022 19:59:28 IST
**/

#include <bits/stdc++.h>
using namespace std; 

#define int long long
const int  M = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;

int fact[15];

void calc(){
    fact[0] = 1;
    for(int i = 1; i < 15; i++) fact[i] = fact[i-1]*i;
}

void solve(){

	// code here
	
	int n;
	cin >> n;
	
	int ans = 0, num = n;
	
	while(num > 0){
	    if(num&1) ans++;
	    
	    num /= 2;
	}

	// cout << ans << endl;
	
	for(int i = 0; i < 16384; i++){
	    bitset<14> bit(i);
	    
	    int sum = 0, ansp = 0, cnt = 0;
	    for(int j = 0; j < 14; j++){
	        if(bit[j] == 1) cnt++, sum += fact[j+1];
	    }

	    num = n;
	    
	    if(sum <= num & sum > 0){
	    	num -= sum;
	    	ansp = cnt;
	    	// cout << bit << endl;
	    	// cout << sum << endl;
	    	
	    	while(num > 0){
	    		if(num&1) ansp++;
	    		num /= 2;
	    	}

	    	ans = min(ans, ansp);
	    }
	    
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
