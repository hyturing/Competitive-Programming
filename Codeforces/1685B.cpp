/**
 *	Author: hyturing
 *	Created: 28 Jun 2022 00:00:11 IST
**/

#include <bits/stdc++.h>
using namespace std; 

const int  MOD = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const long long INF = 1e18;

void solve() {

	// code here
	
	int a, b, c, d; cin >> a >> b >> c >> d;
	// A B AB BA

	string s; cin >> s;
	int n = s.size();

	int s1 = 0, s2 = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'A') s1++;
		else s2++;
	}

	if (s1 != a+c+d or s2 != b+c+d) {
		cout << "NO\n";
		return;
	} 

	vector<string> v;

	string t;
	t.push_back(s[0]);

	for (int i = 1; i < n; i++) {
		if (s[i] != s[i-1]) {
			t += s[i];
		}
		else {
			v.push_back(t);
			t.clear();
			t.push_back(s[i]);
		}
	}

	v.push_back(t);

// ABAB + ABABAB and we are supposed to make 2 AB and 2 BA.

// Case 1: ab = { ABAB, ABABAB }
// We can make 2 AB from first string and 2 BA from second string so its fine.

// Case 2: ab = { ABABAB, ABAB }
// We can make 2 AB from first string but then we can't make any BA from it. 
// And second string can only give 1 BA. So this does not work.

// Point is to keep larger string at last so that they may be used for making BA while 
// minimizing loss of AB caused by making BA.

	sort(v.begin(), v.end());

	vector<int> ab, ba;
	int any = 0;
	
	for (auto x: v) {
		int len = x.size();
		if (len == 2) {
			if (x[0] == 'A') c--;
			else d--;
		}
		else if (len > 2) {
			if (len&1) any += len/2;
			else {
				if (x[0] == 'A') ab.push_back(len/2);
				else ba.push_back(len/2);
			}
		}
	}


	for (int i = 0; i < ab.size(); i++) {
		if (c <= 0) {
			d -= ab[i]-1;
		}
		else if (c-ab[i] > 0) {
			c -= ab[i];
		}
		else {
			d -= max(ab[i]-c-1 , 0);
			c = 0;
		}
	}

	for (int i = 0; i < ba.size(); i++) {
		if (d <= 0) {
			c -= ba[i]-1;
		}
		else if (d-ba[i] > 0) {
			d -= ba[i];
		}
		else {
			c -= max(ba[i]-d-1 , 0);
			d = 0;
		}
	}

	c = max(c, 0);
	d = max(d, 0);
	cout << (c+d <= any ? "YES\n" : "NO\n");

	return;
}

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int tc = 1;
	cin >> tc;
	
	for (int i = 1; i <= tc; i++) {
		// cout << "Case #" << i << ": ";
		solve();
	}

	return 0;
}
