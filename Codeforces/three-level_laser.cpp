/* https://codeforces.com/contest/924/problem/B */
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
	We know that we have to make E(k)-E(j)/E(k)-E(i) maximum.
	As the array is sorted so for a choosen i, j = i+1 would be the best choice.

	Now we will iterate for all the possible values of i (i.e 0 <= i <= n-3) in the array and 
	using binary search find the k such that E(k)-E(i) <= U and we will store the efficency and
	return the maximum of it.

*/

int main(){
	FIO
	
	int n;
		cin >> n;

		ll u, arr[n];
		cin >> u;
		rep(i,0,n) cin >> arr[i];

		double max = -1;

		// if(u == 1){cout << -1; return 0;}

		rep(i,0,n-2){

			auto it = lower_bound(arr, arr+n, arr[i]+u);

			if (it == arr+n) it -= 1;

			if (*it-arr[i] > u && i != n-3) it -= 1;

			if(*it - arr[i] > u || *it == arr[i+1]) continue;

			// Here I have used lower bound which give certain problems while implementaion so above three lines are to tackle those problems.

			// cout << arr[i] << " " << arr[i+1] << " " << *(it) << endl;

			if(static_cast<double>(*it-arr[i+1])/(*it-arr[i]) > max) max = static_cast<double>(*it-arr[i+1])/(*it-arr[i]);
			

			// cout << max << " ";
		}

		cout << fixed << setprecision(15) << max;

	return 0;
}


