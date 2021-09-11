/* https://codeforces.com/contest/1557/problem/B */
/* hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll              long long
#define mp              make_pair
#define pb              push_back
#define pob             pop_back
#define pf              push_front
#define pof             pop_front
#define ff              first
#define ss              second
#define pii             pair<int, int>
#define FIO             ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define rep(i,a,b)      for(int i = a; i < b; i++)
#define endl            "\n"

const ll INF = 1e18;
const int32_t mod = 1e9+7;
const int32_t mm = 998244353;

/*============================================================================================*/

/*
    Approach is simple  (k >= m) ? yes : no, where m is least number of the sorted arrays.

    The coding attempt is rather interesting we make a pair vector with first => number, second => index.

    Then we sort the vector after that we count the number of instances such that v[i].ss+1 != v[i+1].

    Hence m = cnt+1. 
*/

void solve(){
   int n, k;
   cin >> n >> k;

   vector<pair<int, int>> v(n);

   rep(i,0,n){
        cin >> v[i].ff;
        v[i].ss = i;
   }

   int cnt(1);

   sort(v.begin(), v.end());

   rep(i,1,n){
        if(v[i-1].ss + 1 != v[i].ss) cnt++;
   }

   if(k >= cnt) cout << "Yes" << endl;
   else cout << "No" << endl;
}



int main(){
    FIO
        
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}