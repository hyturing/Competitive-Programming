/* https://codeforces.com/contest/1487/problem/B */
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
	Here it would help to think the question in terms of the circle then we would see that
	after n/2 (n is odd) steps intial condition occurs and cat B moves one extra step. 
*/

int main(){
	FIO
	
	w(t){
		int n, k;
		cin >> n >> k;
		
		if(n&1){
			k--;
			int extra(k/(n/2));
			int temp((k+extra)%n);
			cout << temp+1 << endl;
		}
		else{
			int temp(k%n);
			if(temp == 0) cout << n << endl;
			else cout << temp << endl;
		}
	}
	
	return 0;
}
