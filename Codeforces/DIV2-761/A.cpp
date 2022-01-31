/* Author: hyturing - Hemant Kumar Yadav */
// Read the problem statement carefully and clearly.
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	
	string s, t;
	cin >> s >> t;

	sort(s.begin(), s.end());

	char a = t[0], b = t[1], c = t[2];

	string s1 = s, s2 = s, s3 = s;

	int len = s.size();

	for(int i = 0; i < len; i++){
		for(int j = i+1; j < len; j++){
			if(s1[i] == a & s1[j] == b) swap(s1[i], s1[j]);
		}
		for(int j = i+1; j < len; j++){
			if(s2[i] == a & s2[j] == c) swap(s2[i], s2[j]);
		}
		for(int j = i+1; j < len; j++){
			if(s3[i] == b & s3[j] == c) swap(s3[i], s3[j]);
		}
	}

	cout << min(s1, min(s2,s3)) << "\n";


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
