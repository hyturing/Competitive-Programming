/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here

	int n;
	cin >> n;

	vector<int> a(n), b(n);
	map<int,int> m;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		b[i] = a[i];
		m[a[i]] = i;
	}

	sort(b.begin(), b.end());

	int cnt = 0, ans = 0;
	for(auto &it: m) cnt++;

	if(cnt < n){cout << "YES\n"; return;}

	for(int i = 0; i < n; i++){
		if(a[i] != b[i]){
			int x = m[b[i]], y = m[a[i]];
			swap(a[x], a[y]);
			swap(m[a[x]], m[a[y]]);
			ans++;
		}
	}

	if(ans&1) cout << "NO\n";
	else cout << "YES\n";

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
