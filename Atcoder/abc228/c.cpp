/* hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define endl "\n"
#define ll long long
const ll  MOD = 1e9+7;

void solve(){
	int n, k;
	cin >> n >> k;

	vector<int> p(n);
	for(int i = 0; i < n; i++){
		int a, b, c;
		cin >> a >> b >> c;
		p[i] = a+b+c;
	}

	vector<int> r=p;

	sort(r.begin(), r.end());

	for(auto x: p){
		int me = x+300;
		auto it = upper_bound(r.begin(), r.end(), me);
		int rank = (int)(r.end()-it)+1;
		cout << (rank <= k ? "Yes" : "No") << endl;

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
