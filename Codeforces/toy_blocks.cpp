/* https://codeforces.com/contest/1452/problem/B */
/* hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll  			long long
#define mp				make_pair
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
	Suppose the sum of n-1 elements after all the operations is x so x%(n-1) == 0.
	Because we have to make all the n-1 slots same. Now we can't reduce the number of blocks.
	So we will add more blocks if x%(n-1) != 0.

	Now if the nephew does not choose the max element so it is obvious that we have to make all
	the elements equal to max.

	Now we will compute what x should be, it will be k = [max(x, ceil(x/(n-1))]*[n-1].

	Now how many blocks we need to add is k - x and this will be ans as we have to tell the blocks 
	that are needed to be added not the array sequence.
*/

int main(){
	FIO
	
	w(t){
		ll n;
		cin >> n;

		ll mx(-1), sum(0);
		rep(i,0,n){
			ll temp;
			cin >> temp;

			sum += temp;
			if(temp > mx) mx = temp;
		}

		// sum and n are in ll so to caculate ceil converted to double then again converted to long long
		mx = max(mx, static_cast<ll>(ceil(static_cast<double>(sum)/(n-1))));
		cout << (n-1)*mx - sum << endl;
	}

	return 0;
}


