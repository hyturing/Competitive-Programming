/* https://codeforces.com/contest/1526/problem/B */
/* hyturing - Hemant Kumar Yadav */ 
#include "bits/stdc++.h"
using namespace std; 

#define mp              make_pair
#define ll		long long
#define endl            "\n"
#define pb              push_back
#define pob             pop_back
#define pf              push_front
#define pof             pop_front
#define rep(i,a,b)      for(int i = a; i < b; i++)
#define ff              first
#define ss              second
#define pii             pair<int, int>
#define FIO             ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

const ll INF = 1e18;
const int32_t mod = 1e9+7;
const int32_t mm = 998244353;

/*============================================================================================*/

/*

   The series of the given number in the question can be made using only 111 and 11.
   Ex.
   1111  = 100*11 + 11 = 101*11
   11111 = 100*111 + 11
   1111111 = 1000*1111 + 111 = 1000*(100*11 + 11) + 111 = (1000*101)*11 + 111
   And so on.

   So let us consider if the given number is X and if we can represent number X as

   X = A*111 + B*11, where A >= 0 and B >= 0

   We can write the given number using the number in the series. Now to do that.
   Let us consider A = k*11 + D, where 0 <= D < 11

   X = A*111 + B*11 = (k*11 + D)*111 + B*11  = (111*k + B)*11 + D*111, Let r = (111*k + B)

   X = r*11 + 111*D

   X - 111*D = r*11

   Now we could just iterate over for 0 <= D < 11 and check check if X - 111*D is divisible by 11  or not.

*/

void solve(){
    ll n;
    cin >> n;

    ll k = 0;
    while(k<=11){
        ll temp = n  - k*111;
        if (temp < 0) break;
        if (temp%11 == 0){cout << "YES\n"; return;}
        k++;
    }
    cout << "NO\n";
    return;
}

int main() {
    FIO
    
    int t;
    t = 1;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
