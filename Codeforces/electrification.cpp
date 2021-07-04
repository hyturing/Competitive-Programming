/* https://codeforces.com/contest/1175/problem/C */
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
	We need to miniize the (k+1)th distance from the chosen x.

	1. From any point x the (k+1) closest points would be consecutive points.
	2. The x would be the (a[i]+a[i+k])/2 i.e. the average of that (k+1) consecutive terms.
	3. The (k+1)th distance would be min(|a[i]-x|, |a[i+k]-x|).
	4. Now we need to minimize the a[i+k]-a[i] for all the sets available of (k+1) length as it will minimize the x.

	Now in the implementation we iterated through a loop form 0 to i-k+1 and compared the a[i+k]-a[i] from previous 
	and kept whichever is minimum the second part of the pair is the x.
*/

int main(){
    FIO
    
    w(t){
        int n, k;
        cin >> n >> k;

        ll arr[n]; rep(i,0,n) cin >> arr[i];
        
        pair<ll, ll> mn{INF, -1};
        
        rep(i,0,n-k){
            ll dist = arr[i+k] - arr[i];
            
            pair<ll, ll> temp;
            
            temp = mp(dist, arr[i]+dist/2);
            
            mn  = min(mn, temp);
        }

        cout  << mn.ss << endl;
    }

    return 0;
}