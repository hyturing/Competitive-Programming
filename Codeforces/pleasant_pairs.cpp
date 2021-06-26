/* hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define ll  			long long
#define endl			"\n"
#define mp				make_pair
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

const ll INF = 1e18;
const int32_t mod = 1e9+7;
const int32_t mm = 998244353;

/*============================================================================================*/

/*
	Here brute force is working by applying the condition a(i)*a(j) < 2*n.
	Because the total number of pairs possible such that a(i)*a(j) < 2*n is nlog(n).
	i.e
	let a(i) = x, a(j) = y
	x*y < 2*n
	y < (2*n)/x, So the possible values of x will span across 1 to 2*n as 1 <= a(i) <= 2*n

	So total solution would be 2n/1 + 2n/2 + _______ + 2n/n + _______ + 2n/2n-1 + 2n/2n
	=> 2n(1 + 1/2 + 1/3 + 1/4 + ___________ + 1/2n) = 2n*log(2*n)

	Hence nlog(n) solution.
*/

int main(){
	FIO
	
	w(t){
		ll n;
		cin >> n;
		
		vector<pair<ll, ll>> v;
		rep(i,1,n+1){
			ll k;
			cin >> k;
			v.pb(mp(k,i));
		}

		sort(v.begin(), v.end());

		ll ans(0);
		for(int i = 0; i < n; i++){
			for(int j = i+1; j < n; j++){
				if(v[i].ff*v[j].ff > 2*n) break;
				if((v[i].ff*v[j].ff) == (v[i].ss+v[j].ss)) ans++;
			}
		}

		cout << ans << endl;

	}

	return 0;
}
