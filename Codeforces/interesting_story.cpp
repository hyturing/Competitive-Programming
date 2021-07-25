/* https://codeforces.com/contest/1551/problem/C */
/* hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll              long long
#define mp              make_pair
#define pb              push_back
#define pob             pop_back
#define pf              push_front
#define pof             pop_front
#define w(t)            int t; cin >> t; while(t--)
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
    Basically we can assign a score to every word by selecting one letter :-
    1. Initially the score is 0.
    2. If the letter occure score++.
    3. If any other letter occur score--.

    Now we will sort the score in descending order.

    Now in the score array we will take the maximum number of scores such that their sum > 0.

    If score[0] <= 0 we will ignore this case, as sum can't be greater than 0.
    Else add the maximum number of score such that sum > 0 to a vector ans.

    Output maximum of ans.
*/ 

int main(){
    FIO
    
    w(t){
        int n;
        cin >> n;

        string arr[n];
        rep(i,0,n) cin >> arr[i];

        map<char, int> freq;

        rep(i,0,n){
            rep(j,0,arr[i].size()) freq[arr[i][j]]++;
        }

        vector<pair<int, char>> v;

        for(auto i: freq) v.pb(mp(i.ss, i.ff));

        sort(v.rbegin(), v.rend());

        vector<int> ans;

        rep(i,0,v.size()){
            char req = v[i].ss;

            int score[n] = {0};

            rep(i,0,n){
                rep(j,0,arr[i].size()){
                    if(arr[i][j] == req) score[i]++;
                    else score[i]--;
                }
            }

            sort(score, score+n, greater<int>());

            if(score[0] <= 0) continue; 

            int sum = 0, cnt = 0;

            rep(i,0,n){
                if(score[i] >= 0){sum += score[i]; cnt++;}
                else{
                    if(sum + score[i] > 0){sum += score[i]; cnt++;}
                    else break;
                }
            }
            ans.pb(cnt);
        }

        sort(ans.rbegin(), ans.rend());

        if(ans.size() == 0) cout << 0 << endl;
        else cout << ans[0] << endl;
    }
    
    return 0;
}


