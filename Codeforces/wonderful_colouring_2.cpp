/* https://codeforces.com/contest/1551/problem/B2 */
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
    This problem can be solved using frequency table.

    Things to notice :-
    1. If frequency of a number is more than or equal k than set of that number will have k colours rest will be 0's.
    2. All those number whose frequency is less than k. We will add them and for till length m (m = (sum/k)*k) we will
       repeat colours from 1 to k and after m we will put 0's.

    Rest is the implementation.
*/

int main(){
    FIO

    w(t){
        int n, k;
        cin >> n >> k;

        int arr[n];
        rep(i,0,n) cin >> arr[i];

        map<int, int> m, m2;

        for(auto i: arr) m[i]++;

        vector<pair<int, int>> ans;

        for(auto i: m){
            if(i.ss >= k){
                int r = 0;
                rep(j,0,i.ss){
                    if(r == k) ans.pb(mp(i.ff, 0));
                    else{r++; ans.pb(mp(i.ff, r));}
                }
            }
            else{
                m2[i.ff] = i.ss;
            }
        }


        if(m2.size() >= 1){
            vector<int> arr2;

            for(auto i: m2){
                rep(j,0,i.ss) arr2.pb(i.ff);
            }
            
            int len = arr2.size();
            if(len >= k) len = k*(len/k);
            if(len < k) len = 0;

            int r = 0;


            rep(i,0,len){
                if(r == k) r = 0;
                r++;
                ans.pb(mp(arr2[i], r));
                
            }

            rep(i,len,n) ans.pb(mp(arr2[i], 0));
        }

        vector<pair<int, int>> v;

        rep(i,0,n) v.pb(mp(ans[i].ff, ans[i].ss));

        sort(v.begin(), v.end());

        vector<pair<int,int>> loc;

        rep(i,0,n) loc.pb(mp(arr[i], i));

        sort(loc.begin(), loc.end());

        int color[n];

        rep(i,0,n) color[loc[i].ss] = v[i].ss;

        rep(i,0,n) cout << color[i] << " "; cout << endl;
    }

    return 0;
}