/* https://codeforces.com/contest/1555/problem/D */
/* hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define mp              make_pair
#define ll              long long
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
#define endl            "\n"

const ll INF = 1e18;
const int32_t mod = 1e9+7;
const int32_t mm = 998244353;

/*============================================================================================*/

/*
	Very interesting problem.
	To form a beautiful string of such that it does not contain palindrome of length >= 2 no number
	should be repeated in consective manner in fact they will be follwing a pattern.

	The string should be of form
	abcabcabc........, where abc string is repeating now there will totally of 6 permutations of this
					   string abc which should be considered.

	So we will form 6 string of length n with add the different combination and check which one of them
	is the most similar and give the cost according to that.

	Now this can be done using prefix sum arrays.
	First we put 0 for the same and 1 for the different.
	Take the prefix sum array.
	Now for every l,m query can be responded O(1).

	next_permutation(function):- If the function can determine the next higher permutation, it rearranges the elements 
	as such and returns true. If that was not possible (because it is already at the largest possible permutation), 
	it rearranges the elements according to the first permutation (sorted in ascending order) and returns false or 0.

	Time Complexity = O(6*(n+m))
*/

int main(){
    FIO
    
    int n, m;
    cin >> n >> m;

    string s;
    cin >> s;

    string t = "abc";

    int score[6][n+1] = {0}, cur(0);

    do{
    	rep(i,0,n){
    		score[cur][i+1] = score[cur][i] + (s[i] != t[i%3]);
    	}
    	cur++;
    }
    while(next_permutation(t.begin(), t.end()));

    while(m--){
    	int l, r;
    	cin >> l >> r;
    	int ans = INT_MAX;

    	rep(i,0,6){
    		if(i==0) ans = min(ans, score[i][r]);
    		ans = min(ans, score[i][r]-score[i][l-1]);
    	}

    	cout << ans << endl;
    }

    return 0;
}


