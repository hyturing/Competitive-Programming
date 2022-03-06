/**
 *	Author: hyturing
 *	Created: 03 Mar 2022 21:34:58 IST
**/

#include <bits/stdc++.h>
using namespace std; 

#define int long long
const int  M = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;

void solve(){

	// code here
	
	int n;
	cin >> n;

	stack<int> s;

	for(int i = 0; i < n; i++){
		int k;
		cin >> k;

		if(i == 0 | k == 1){
			s.push(k);

			stack<int> temp = s;

			vector<int> v;
			while(!temp.empty()){
				v.push_back(temp.top());
				temp.pop();
			}

			reverse(v.begin(), v.end());

			int len = v.size();

			for(int j = 0; j < len; j++){
				if(j < len-1) cout << v[j] << ".";
				else cout << v[j] << "\n";
			}

			continue;
		}

		while(s.top() != k-1){
			s.pop();
		}

		s.pop();

		s.push(k);

		stack<int> temp = s;

		vector<int> v;
		while(!temp.empty()){
			v.push_back(temp.top());
			temp.pop();
		}

		reverse(v.begin(), v.end());

		int len = v.size();

		for(int j = 0; j < len; j++){
			if(j < len-1) cout << v[j] << ".";
			else cout << v[j] << "\n";
		}
	}

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
