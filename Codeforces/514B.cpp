/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	int n;
	double x, y;
	cin >> n >> x >> y;

	set<double> line;
	for(int i = 0; i < n; i++){
		double a, b;
		cin >> a >> b;
		a = x-a;
		b = y-b;
		if(a == 0) line.insert(100000);
		else line.insert(b/a);
	}

	cout << line.size();

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
