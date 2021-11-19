/* hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define endl "\n"
#define ll long long
const ll  MOD = 1e9+7;

ll primeFact(ll n){
	ll cnt = 0;
	for(ll i=3; i<=sqrt(n); i+=2){
		while(n%i==0){cnt++; n/=i;}
	}

	if(n>2) cnt++;

	return cnt;
}

void solve(){
	ll n;
	cin >> n;
	
	if(n==1){cout << "FastestFinger" << endl; return;}
	if(n&1 || n==2){cout << "Ashishgup" << endl; return;}
	
	int m=n;

	while(m%2==0) m/=2;

	if(m==1){cout << "FastestFinger" << endl; return;}	

	if((n/2)&1){
		ll k = primeFact(n/2);

		if(k==1) cout << "FastestFinger" << endl;
		else cout << "Ashishgup" << endl;
	}
	else cout << "Ashishgup" << endl;
	
	return;
}

int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int tc = 1;
	cin >> tc;
	for(int i = 1; i <= tc; i++){
		// cout << "Case #" << i << ": ";
		solve();
	}

	return 0;
}
