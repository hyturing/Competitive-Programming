/* Author: hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  M = 1e9+7;
const ll MM = 998244353;
const int N = 1e5+5;

vector<int> p(1001);

int Find(int x){
    int y = x, z;
    
    while(p[y] != y) y = p[y];
    
    while(p[x] != x){
        z = p[x];
        p[x] = y;
        x = z;
    }
    
    return x;
}

void Union(int x, int y){
    x = Find(x);
    y = Find(y);
    
    p[x] = y;
}

void solve(){

    // code here
    
    for(int i = 0; i < 1001; i++){
        p[i] = i;
        
    }
    
    int n, d;
    cin >> n >> d;
    
    int extra = 0;

    for(int i = 1; i <= d; i++){
    	int x, y;
    	cin >> x >> y;

    	x = Find(x), y = Find(y);

    	if(x == y){
    		extra++;
    	}
    	else{
    		Union(x, y);
    		for(int i = 1; i <= n; i++){
    			if(p[i] == x) p[i] = y;
    		}
    	}

    	vector<int> a(n+1,0);

    	for(int i = 1; i <= n; i++){
    		a[p[i]]++;
    	}

    	sort(a.rbegin(), a.rend());

    	int ans = 0;

    	for(int i = 0; i <= extra; i++){
    		ans += a[i];
    	}

    	cout << ans-1 << "\n";

    	// for(int i = 1; i <= n; i++) cout << p[i] << " "; cout << endl;
    	// for(auto x: a) cout << x << " "; cout << endl;
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