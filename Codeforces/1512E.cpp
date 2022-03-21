/**
 *	Author: hyturing
 *	Created: 18 Mar 2022 20:15:17 IST
**/

#include <bits/stdc++.h>
using namespace std; 

#define int long long
const int  M = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;

void solve(){

	// code here
	
	int n, l, r, s;
	cin >> n >> l >> r >> s;

	int len = r-l+1, ls = (len*len+len)/2, m = n-len, rs = (n*n+n)/2-(m*m+m)/2;

	// cout << ls << " " << rs << endl;

	if(s >= ls & s <= rs){
		vector<int> v(len);

		int i = 0, k = n, sz = len;

		while(i < len){
			if(i == len-1){
				if(s == k){v[i] = k; i++;}
				k--;

				continue;
			}

			if(s >= k){
				if(s-k >= (sz*sz-sz)/2){
					v[i] = k;
					s -= k;
					i++;
					sz--;
				}
			}
			
			k--;
		}

		vector<bool> ok(n, 0);
		vector<int> ans(n, 0);

		for(int j = l-1; j < r; j++){
			ans[j] = v[j-l+1];
			ok[v[j-l+1]-1] = true;
		}


		for(int j = 0; j < n; j++){
			i = 0;
			if(ans[j] == 0){
				while(ok[i]) i++;
				ans[j] = i+1;
				ok[i] = true;
			}
		}

		for(auto x: ans) cout << x << " "; cout << "\n";

		return;
	}
	else cout << -1 << "\n";

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
