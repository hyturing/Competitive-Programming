/**
 *	Author: hyturing
 *	Created: 17 May 2022 22:22:55 IST
**/

#include <bits/stdc++.h>
using namespace std; 

#define int long long
const int  MOD = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const int INF = 1e18;

int factorial[1001];

void pre() {
	factorial[0] = 1;

	for (int i = 1; i <= 1000; i++) factorial[i] = (factorial[i-1]*i)%MOD;
}

int binpow(int a, int b) {
    int res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res * a)%MOD;
        a = (a * a)%MOD;
        b >>= 1;
    }
    return res;
}


int inv(int x) {
	return (binpow(x, MOD-2) % MOD);
}

void solve() {

	// code here
	
	int n, k;
	cin >> n >> k;

	vector<int> a(n);
	for(auto &x: a) cin >> x;

	sort(a.rbegin(), a.rend());

	if (a[0] == a[k-1]) {
		int cnt = 0;
		for (auto x: a) {
			if (x == a[0]) cnt++;
		}

		k = min(cnt-k, k);

		cout << (factorial[cnt] * ((inv(factorial[k]) * inv(factorial[cnt - k])) % MOD)) % MOD << "\n";
		return;
	}
	else {
		int cnt = 0;
		int k_ = 0;
		for (int i = 0; i < n; i++) {
			if (a[i] == a[k-1]) cnt++;
			if (i < k and a[i] == a[k-1]) k_++; 
		}

		k = min(cnt-k_, k_);

		cout << (factorial[cnt] * ((inv(factorial[k]) * inv(factorial[cnt - k])) % MOD)) % MOD << "\n";
	}

	return;
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int tc = 1;
	cin >> tc;
	
	pre();

	for (int i = 1; i <= tc; i++) {
		// cout << "Case #" << i << ": ";
		solve();
	}

	return 0;
}
