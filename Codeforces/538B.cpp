/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	string s, k="";
	cin >> s;
	for(int i = 0; i < s.size(); i++) k += '0';

	vector<string> v;

	while(s != k){
		string temp="";
		for(int i = 0; i < s.size(); i++){
			if(s[i] != '0'){temp += '1'; s[i]--;}
			else temp += '0';
		}
		v.push_back(temp);
	}

	cout << v.size() << "\n";
	for(int i = 0; i < v.size(); i++) cout << stoi(v[i]) << " ";

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
