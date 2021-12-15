/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	int n, a, b;
	cin >> n >> a >> b;

	int mx_pos = (n-1)/2;
	int p[n];
	for(int i = 0; i < n; i++) p[i] = i+1;
	if(a > mx_pos | b > mx_pos | abs(a-b) > 1) cout << -1 << "\n";
	else{
		if(a > b){
			for(int i = n-1; i > 0; i--){
				if(a==0) break;
				swap(p[i], p[i-1]);
				i--;
				a--;
			}
		}
		else if(a==b){
			if(n==1){cout << 1 << "\n"; return;}
			if(n&1){
				if(a == mx_pos){cout << -1 << "\n"; return;}
			}
			for(int i = 1; i < n-1; i++){
				if(b==0) break;
				swap(p[i],p[i+1]);
				i++;
				b--;
			}

		}
		else{
			
			for(int i = 0; i < n-1; i++){
				if(b==0) break;
				swap(p[i], p[i+1]);
				i++;
				b--;
			}
		}

		for(auto &x: p) cout << x << " "; cout << "\n";

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
