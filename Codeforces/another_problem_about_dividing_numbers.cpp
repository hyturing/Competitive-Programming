/* https://codeforces.com/contest/1538/problem/D */ 
/* hyturing - Hemant Kumar Yadav */

#include "bits/stdc++.h"
using namespace std;

#define ll              long long 
#define endl            "\n"
#define pb              push_back
#define pob             pop_back
#define pf              push_front
#define pof             pop_front
#define w(t)            int t; cin>>t; while(t--)
#define rep(i,a,b)      for(int i = a; i < b; i++)
#define ff              first
#define ss              second
#define pii             pair<int, int>
#define FIO             ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

const ll INF = 1e18;
const int32_t mod = 1e9+7;
const int32_t mm = 998244353;

/*============================================================================================*/


vector<ll> prime;
ll num = 100000;
bool isPrime(ll n){
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n%2==0 or n%3==0) return false;

    for (ll i = 5; i*i<=n; i += 6){
        if (n%i==0 or n%(i+2)==0) return false;
    }
    return true;
}


ll fact(ll n){
    ll cnt(0);
    ll lo(0), hi(prime.size()), mid;
    while(lo<hi){
        mid = (hi+lo)/2;
        if (sqrt(n)<prime[mid]) hi = mid;
        else lo = mid+1;
    }
    for (ll i = 0; i <= mid; i++){
        while(n%prime[i] == 0){cnt++; n /= prime[i];}
    }
    if (n > 2) cnt++;
    return cnt;
}


void oneTime(){
    for (ll i = 2; i <= num; i++){
        if (isPrime(i)) prime.pb(i);
    }
    return;
}


int main(){
    FIO
    oneTime();
    w(t){
        ll a, b, k;
        cin >> a >> b >> k;

        ll mx(0), mi(0), gc = __gcd(a, b);
        mx += fact(a) + fact(b);

        if (gc == a || gc == b){
            if (a==b) mi = 2;
            else mi = 1;
        }
        else mi = 2;

        if (k>=mi && k<=mx) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
