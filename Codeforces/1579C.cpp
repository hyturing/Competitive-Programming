/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	
	int n, m, k;
	cin >> n >> m >> k;

	int f[n][m], cnt = 0, color[n][m];

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			char x;
			cin >> x;
			f[i][j] = (x == '*' ? 1 : 0);

			cnt += (x == '*' ? 1 : 0);

			color[i][j] = 0;
		}
	}

	for(int i = n-1; i >= 0; i--){
		for(int j = m-1; j >= 0; j--){
			if(f[i][j] != 1) continue;
			int h = 0;
			vector<pair<int,int>> v;
			int a = i;
			while(true){
				a--;
				if(a < 0 | j-h-1 < 0 | j+h+1 >= m){break;}
				if(f[a][j+h+1] == 1 & f[a][j-h-1] == 1){v.push_back({a,j+h+1}); v.push_back({a,j-h-1}); h++;}
				else break;
			}

			if(h >= k){
				for(auto x: v){color[x.first][x.second] = 1;}
				color[i][j] = 1;
			}
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(f[i][j] != color[i][j]){
				cout << "NO\n";
				return;
			}
		}
	}

	
	cout << "YES\n";

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
