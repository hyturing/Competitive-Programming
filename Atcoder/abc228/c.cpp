/* hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define endl "\n"
#define ll long long
const ll  MOD = 1e9+7;

void solve(){
	int n, k;
	cin >> n >> k;

	int p[n]={0};
	for(int i = 0; i < n; i++){
		int p1, p2, p3;
		cin >> p1 >> p2 >> p3;
		p[i] += p1+p2+p3;
	}
	set<pair<int,int>> s;
	for(int i = 0; i < n; i++){
		s.insert({p[i],i});
	}

	for(int i = 0; i < n; i++){
		auto it = s.find({p[i],i});
		s.erase(it);
		s.insert({p[i]+300,i});
		auto its = s.find({p[i]+300,i});
		int r = 0;
		it = its;
		r = distance(it, s.end());
		// while(it != s.end()){r++; it++;}
		if(r-1<=k) cout << "Yes" << endl;
		else cout << "No" << endl;
		s.erase(its);
		s.insert({p[i],i});
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
