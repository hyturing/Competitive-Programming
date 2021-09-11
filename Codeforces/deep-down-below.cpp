/* https://codeforces.com/contest/1561/problem/C */
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
    Very nice approach read the editorial. Amazing inequalities question.
    https://codeforces.com/blog/entry/94216
*/


void solve(){
    int n;
    cin >> n;

    vector<pair<ll,ll>> v;

    rep(i,0,n){
        ll k;
        cin >> k;

        ll mx(-1);

        rep(j,0,k){
            ll t;
            cin >> t;

            mx = max(mx, t-j);
        }

        v.pb(mp(mx, k));
    }

    sort(v.begin(), v.end());

    ll arr[n] = {0};

    rep(i,1,n) arr[i] = arr[i-1]+v[i-1].ss; 
    

    ll mx(-1);

    rep(i,0,n) mx = max(mx, v[i].ff - arr[i]);

    cout << mx+1 << endl; return;
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