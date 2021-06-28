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
	First we check if there are k smallest char available if not then ans is k+1 (1 based indexing)
	element in the sorted string.

	Next we check if the rest of the elements are same if so then we evenly distribute all the elements.

	Else we append rest n-k+1 elements to the arr[0] and it can be proved that it will be the lexographically
	smallest.
*/

int main(){
	FIO
	
	w(t){
		int n, k;
		cin >> n >> k;

		char arr[n]; rep(i,0,n) cin >> arr[i];

		sort(arr, arr+n);

		if (arr[0] != arr[k-1]) cout << arr[k-1] << endl;
		else{
			cout << arr[0];
			if(arr[k] != arr[n-1]) rep(i,k,n) cout << arr[i];
			else{
				for(int i = k; i < n; i += k) cout << arr[n-1];
			}
			cout << endl;
		}


	}

	return 0;
}


