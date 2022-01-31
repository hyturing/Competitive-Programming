/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  M = 1e9+7;
const ll MM = 998244353;
const int N = 1e5+5;

void solve(){

	// code here
	
	int n;
	cin >> n;

	int cnt[n+1]= {0};
	int arr[n];
	for(auto &x: arr){
		cin >> x;
		cnt[x]++;
	}

	vector<int> ans;
	int c = 0;

	int x = 0;

	while(c < n){
		int cur;
		for(int i = 0; i < n+1; i++){
			if(cnt[i] == 0){
				cur = i;
				break;
			}
		}

		set<int> s;

		// cout << cur << " ";
		if(cur == 0){
			int k = n-c;
			while(k--) ans.push_back(0);
			break;
		}

		for(int i = x; i < n; i++){
			if(s.size() == cur){
				ans.push_back(cur);
				break;
			}

			if(arr[i] > cur){
				cnt[arr[i]]--;
				c++; x++;
				continue;
			}
			cnt[arr[i]]--;
			s.insert(arr[i]);
			c++; x++;
		}

		if(x == n){
			ans.push_back(cur);
		}

	}

	// cout << endl << endl;

	cout << ans.size() << "\n";
	for(auto x: ans) cout << x << " "; cout << "\n";

	return;
}

/* 
	-> Read the problem statement carefully and clearly.

	-> Think Brute Force first.
	
	-> While practice if WA think first don't see test cases.
	
	-> If code too long logic maybe incorrect. 
*/

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
