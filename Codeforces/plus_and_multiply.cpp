// https://codeforces.com/contest/1542/problem/B
/* hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll  			long long
#define mp  			make_pair
#define pb  			push_back
#define pob 			pop_back
#define pf  			push_front
#define pof 			pop_front
#define w(t)			int t; cin >> t; while(t--)
#define ff  			first
#define ss  			second
#define pii 			pair<int, int>
#define FIO 			ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define rep(i,a,b)		for(int i = a; i < b; i++)
#define endl			"\n"

const ll INF = 1e18;
const int32_t mod = 1e9+7;
const int32_t mm = 998244353;

/*============================================================================================*/

/*
	Now when we make tree for this question we will realize that eventually every number  in the tree 
	can be broken down in the following way :-

		n = (a^k) * (r*b)  + m*b

	See we basically one new series of number can only be formed when number is multiplied by (a)
	rest will basically formed because of the +b branch.

	So we will check if (n-(a^k))%b == 0. If true than yes else no.

	For more help visit https://www.youtube.com/watch?v=dyQ_EFc1RO4&t=768s 
*/

int main(){
	FIO
	
	w(t){
		ll n, a, b;
		cin >> n >> a >> b;
		
		ll x = 1;

		vector<ll> v;

		v.pb(x);

		rep(i,0,32){
			x *= a;
			v.pb(x);
		}

		bool k(false);

		rep(i,0,33){
			if(n<v[i]) break;
			if(k) break;

			if((n-v[i])%b == 0) k = true;
		}

		if(k) cout << "YES\n";
		else cout << "NO\n";
	}
	
	return 0;
}


