/**
 *	Author: hyturing
 *	Created: 
**/

#include <bits/stdc++.h>
using namespace std; 

const int  MOD = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const long long INF = 1e18;
#define int long long
int pw[31];

void preSolve() {
	int i = 0, k = 1;
	for (int i = 0; i < 31; i++) {
		pw[i] = k;
		k *= 2;
	}

	return;
}

void solve() {

	// code here
	
	int n, a, b; cin >> n >> a >> b;

	int A[n] = {0}, B[n] = {0};

	if (a > b) swap(a, b);

	int p = a, q = b;
	int i = 0;

	while (p > 0) {
		A[i] = p%2;
		p /= 2;
		i++;
	}
	i = 0;
	while (q > 0) {
		B[i] = q%2;
		q /= 2;
		i++;
	}

	int s1 = 0;
	vector<int> v;

	int C[n] = {0};
	for (int i = 0; i < n; i++) {
		if (A[i] == B[i]) {
			s1 += pw[i];
			C[i] = (A[i]+1)%2;
		}
		else {
			v.push_back(pw[i]);
		}
	}

	sort(v.begin(), v.end());

	int aa = s1, bb = s1;

	if (v.size() == 0) {
		int ans = 0;

		for (int j = 0; j < n; j++) {
			if (C[j]) ans += pw[j];
		} 

		cout << ans << "\n";
		return;
	}

	for (int i = 0; i < v.size(); i++) {
		if (i < v.size()-1) {
			aa += v[i];
			continue;
		}
		bb += v[i];
	}

	// if ((aa == a and bb == b) or (aa == b or bb == a)) {
	// 	cout << 0 << "\n";
	// 	return;
	// } 

	// cout << aa << " " << bb << "\n";
	// cout << a << " " << b << "\n";

	cout << min((aa^a), (aa^b)) << "\n";

	return;
}

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	preSolve();
	int tc = 1;
	cin >> tc;
	
	for (int i = 1; i <= tc; i++) {
		// cout << "Case #" << i << ": ";
		solve();
	}

	return 0;
}
