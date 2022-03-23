/**
 *	Author: hyturing
 *	Created: 22 Mar 2022 20:19:22 IST
**/

#include <bits/stdc++.h>
using namespace std; 

#define int long long
const int  MOD = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const int INF = 1e18;

bool isPerfectSquare(long double x)
{
    if (x >= 0) {
 
        int sr = sqrt(x);
         
        return (sr * sr == x);
    }
    return false;
}

void solve(){

	// code here
	
	int x, y;
	cin >> x >> y;

	if(x == 0 & y == 0) cout << 0 << endl;
	else{
		if(isPerfectSquare((x*x+y*y))) cout << 1 << endl;
		else cout << 2 << endl;
	}

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
