/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	int n;
	cin >> n;
	int sz = 1e5+5;
	int p[sz]={0};
	int cnt2=0, cnt4=0;

	for(int i = 1; i <= n; i++){
		int k;
		cin >> k;
		cnt2 -= p[k]/2;
		cnt4 -= p[k]/4;
		p[k]++;
		cnt2 += p[k]/2;
		cnt4 += p[k]/4;
	}

	int q;
	cin >> q;
	for(int i = 0; i < q; i++){
		char s; int k;
		cin >> s >> k;

		cnt2 -= p[k]/2;
		cnt4 -= p[k]/4;
		
		if(s=='+'){
			p[k]++;
		}
		else p[k]--;

		cnt2 += p[k]/2;
		cnt4 += p[k]/4;

		if(cnt4 >= 1 & cnt2 >= 4) cout << "YES\n";
		else cout << "NO\n";
	}

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
