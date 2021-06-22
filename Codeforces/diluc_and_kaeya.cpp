/* https://codeforces.com/contest/1536/problem/C */
/* hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std;

#define mp              make_pair
#define ll				long long
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

// Approach is simple if a we store the frequency of ratio in the hash table of each prefix.
/*
    Suppose the string :-
    Ratio format (d,k)
      1     2     3     4     5     6    
      D     K     D     K     D     D
    (1,0)-(1,1)-(2,1)-(2,2)-(3,2)-(4,2)
      D     K     D     K     D     D
    (1,0)-(1,1)-(2,1)-(1,1)-(3,2)-(2,1)

    Suppose we are at index 4. Now till index 2 to is ratio 1:1 and also till index 4 raito is 1:1.
    Hence the ratio from index 2 to 4 has to be 1:1.
    So we can make a max of one cut in this part of string i.e 2 parts.
    Similarly till index 3 ratio is 2:1 and for index 6 also the same ratio.
    Hence the ratio form index 4 to 6 has to be 2:1.
    So we can make a max of one cut in this part of string i.e 2 parts.
*/

int main() {
    FIO
    
    w(t){
        int n; 
        cin >> n; 
        string s; 
        cin >> s;

        int d(0), k(0);

        map<pii, int> freq;

        for (char c: s){
            if(c == 'D') d++; else k++;
            // Dividing from gcd to make the ratio as simple as possible.
            // If one of the variable is zero then also there will be no problem as the gcd would be the other one.
            int g = __gcd(d, k);
            int x, y;
            x = d/g; y = k/g;
            freq[{x, y}]++;
            cout << freq[{x,y}] << " ";
        }

        cout << endl;
    }

    return 0;
}
