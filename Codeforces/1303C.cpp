/**
 *	Author: hyturing
 *	Created: 06 Jun 2022 15:49:27 IST
**/

#include <bits/stdc++.h>
using namespace std; 

#define int long long
const int  MOD = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const int INF = 1e18;

void solve() {

	// code here
	
	string s;
	cin >> s;

	int n = s.size();

	vector<char> ans;
	set<char> ok;
	ans.push_back(s[0]);
	ok.insert(s[0]);

	int j = 0;
	for (int i = 1; i < n; i++) {
		if (ok.find(s[i]) == ok.end()) {
			if (j == 0 or j == ans.size()-1) {
				if (j == 0) {
					vector<char> k = {s[i]};
					for (auto x: ans) k.push_back(x);
					ans = k;
					ok.insert(s[i]);
				}
				else {
					ans.push_back(s[i]);
					ok.insert(s[i]);
					j++;
				}
			}
			else {
				cout << "NO\n";
				return;
			}
		}
		else {
			if (j == 0) {
				if (s[i] == ans[j+1]) {
					j++; 
				}
				else {
					cout << "NO\n";
					return;
				}
				continue;
			}
			if (j == ans.size()-1) {
				if (s[i] == ans[j-1]) {
					j--;
				}
				else {
					cout << "NO\n";
					return;
				}
				continue;
			}

			if (ans[j-1] == s[i] or ans[j+1] == s[i]) {
				if (ans[j-1] == s[i]) j--;
				else j++;
			}
			else {
				cout << "NO\n";
				return;
			}
		}
	}

	vector<bool> check(26, false);

	for (auto x: ans) check[x-'a'] = true;

	char k = 'a';
	for (int i = 0; i < 26; i++) {
		if (!check[i]) {
			ans.push_back(k);
		}

		k++;
	} 

	cout << "YES\n";
	for (auto x: ans) cout << x; cout << "\n";

	return;
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int tc = 1;
	cin >> tc;
	
	for (int i = 1; i <= tc; i++) {
		// cout << "Case #" << i << ": ";
		solve();
	}

	return 0;
}
