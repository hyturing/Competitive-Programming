/* https://codeforces.com/problemset/problem/1550/B */
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
	Now score will be always be of form :-

	When b >= 0 we need to add one by one for maximum score.

	When b < 0 then we need to delete the string in least steps possible.

	score = n*a + k*b, because now matter the steps a will be added n times and b will be added k
	times where k is the least number of steps requried to eliminate string.

	Let the string contains m blocks of 1's and 0's. In one step of selecting substring we can maximum
	reduce m by 2 first-time the substring we will be selecting and second-time when remaing parts will be
	joined.

	So when the m > 2 we will divide the block in 3 parts {first-block, second-block, remaining} and will 
	always delete second-block reducing the m by 2.

	So k = floor(m/2) + 1;

	score = n*a + k*b

	To calculate m (number of blocks) we use unique from the stl.
	Removes all but the first element from every consecutive group of equivalent elements in the range [first,last).

	Below in demo function working of unique is given.
*/	

// For unique reference
// https://www.cplusplus.com/reference/algorithm/unique/

void demo(){
  	int myints[] = {10,20,20,20,30,30,20,20,10};           // 10 20 20 20 30 30 20 20 10
  	std::vector<int> myvector (myints,myints+9);

  	// using default comparison:
  	std::vector<int>::iterator it;
  	it = std::unique (myvector.begin(), myvector.end());   // 10 20 30 20 10 ?  ?  ?  ?
                                                         //                ^

 	 myvector.resize( std::distance(myvector.begin(),it) ); // 10 20 30 20 10

 	 // using predicate comparison:
  	std::unique (myvector.begin(), myvector.end(), myfunction);   // (no changes)

  	// print out content:
  	std::cout << "myvector contains:";
  	for (it=myvector.begin(); it!=myvector.end(); ++it)
    	std::cout << ' ' << *it;
  	std::cout << '\n';

  	return 0;
}

int main(){
	FIO
	
	w(t){
		int n, a, b;
		cin >> n >> a >> b;
		vector<int> s;
		rep(i,0,n){
			char c; 
			cin >> c;
			s.pb(static_cast<int>(c)); 
		}

		if(b >= 0){
			int ans = n*(a+b);
			
			cout << ans << endl;
		}
		else{

			vector<int>::iterator it;
			it = unique(s.begin(), s.end());
			
			s.resize(distance(s.begin(), it));

			int len = s.size()/2 + 1;
			int ans = n*a + b*len;
	
			cout << ans << endl;
		}
	}
	
	return 0;
}


