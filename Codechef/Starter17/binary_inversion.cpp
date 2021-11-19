/* hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define endl "\n"
#define ll long long
const ll  MOD = 1e9+7;

void solve(){
	int n, m;
	cin >> n >> m;

	vector<pair<int, string>> v;

	for(int i = 0; i < n; i++){
		string s;
		cin >> s;
		int cnt = 0;
		for(auto c: s) if(c == '1') cnt++;
		v.push_back({cnt, s});
	}

	sort(v.begin(), v.end());

	string x = "";
	for(auto c: v) x+=c.second;

	// string s[n], x = "";
	// for(auto &c: s) cin >> c;

	// sort(s, s+n);

	// for(auto c: s) x += c;

	int pre[n*m];

	for(int i = n*m-1; i >= 0; i--){
		if(i == n*m-1){
			if(x[i] == '0'){pre[i] = 1;}
			else{pre[i] = 0;}
			continue;
		}
		if(x[i] == '0') pre[i] = pre[i+1]+1;
		else pre[i] = pre[i+1];
	}

	// for(auto c: pre) cout << c << " "; cout << endl;

	long long ans = 0;

	for(int i = 0; i < n*m; i++) if(x[i] == '1') ans += pre[i];

	cout << ans << endl;
	
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
