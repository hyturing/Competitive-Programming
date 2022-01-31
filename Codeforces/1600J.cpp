/* Author: hyturing - Hemant Kumar Yadav */
// Read the problem statement carefully and clearly.
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

int n, m;
int dsu[1005*1005], ans[1005*1005]={0};

int Find(int x){
	if(x == dsu[x]) return x;
	return dsu[x] = Find(dsu[x]);
}

int Union(int x, int y){
	return dsu[Find(x)] = Find(y);
}

void formation(int index, int num){
	string s = bitset<4>(num).to_string();
	if(s[1]=='0') Union(index+1, index);
	if(s[2]=='0') Union(index+m, index);
}

void solve(){

	// code here
	
	cin >> n >> m;
	int index = 0;

	for(int i = 1; i <= n*m; i++) dsu[i] = i;

	for(int i = 0; i < n*m; i++){
		int num;
		cin >> num;
		formation(++index, num);
	}	

	for(int i = 1; i <= n*m; i++){
		int k = Find(i);
		ans[k]++;
	}

	sort(ans+1, ans+n*m+1);

	for(int i = n*m; i > 0; i--){
		if(ans[i] == 0) break;
		cout << ans[i] << " ";
	}

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
