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

	string s[n];
	map<string,int> m;

	for(int i = 0; i < n; i++){
		cin >> s[i];
		m[s[i]] = i;
	}

	for(int i = 0; i < n; i++){
		int j = 0, k = s[i].size()-1;
		if(s[i][j] == s[i][k]){
			cout << "YES\n";
			return;
		}
	}

	for(int i = 0; i < n; i++){
		if(s[i].size() == 2){
			string x = s[i];
			reverse(x.begin(), x.end());
			if(m.find(x) != m.end()){
				cout << "YES\n";
				return;
			}

			char temp = 'a';
			temp--;
			for(int j = 0; j < 26; j++){
				temp++;
				string xx = x+temp;
				if(m.find(xx) != m.end()){
					if(m[xx] < i){
						cout << "YES\n";
						return;
					}
				}
				xx = temp+x;
				if(m.find(xx) != m.end()){
					if(m[xx] > i){
						cout << "YES\n";
						return;
					}
				}
			}
		}
		else{
			string x = s[i].substr(1,2);
			reverse(x.begin(), x.end());
			if(m.find(x) != m.end()){
				if(m[x] < i){
					cout << "YES\n";
					return;
				}
			}

			x = s[i];
			reverse(x.begin(), x.end());
			if(m.find(x) != m.end()){
				cout << "YES\n";
				return;
			}
		}
	}

	cout << "NO\n";

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
