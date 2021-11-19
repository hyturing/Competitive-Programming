/* hyturing - Hemant Kumar Yadav */
#include "bits/stdc++.h"
using namespace std; 

#define endl "\n"
#define ll long long
const ll  MOD = 1e9+7;

bool can(int m, int s)
{
    return s >= 0 && s <= 9 * m;
}

void solve(){
	int m, s;
	cin >> m >> s;
	// string minn = "";
	// int sum = s;
 //    for (int i = 0; i < m; i++)
 //        for (int d = 0; d < 10; d++)
 //            if ((i > 0 || d > 0 || (m == 1 && d == 0)) && can(m - i - 1, sum - d))
 //            {
 //                minn += char('0' + d);
 //                sum -= d;
 //                break;
 //            }

 //    cout << minn << endl;

	string mxx = "";

	if(s > m*9){cout << -1 << " " << -1; return;}
	if(s == 0 && m==1){cout << 0 << " " << 0 ; return;}
	if(s == 0){cout << -1 << " " << -1 ; return;}


	int t = s;
	for(int i = 0; i < m; i++){
		if(t >= 9){mxx += char('0'+9); t -= 9;}
		else{mxx += char('0'+t); t = 0;}
	}

	string mii = mxx;
	reverse(mii.begin(), mii.end()); 
	
	if(mii[0] == '0'){
		for(int i = 0; i < mii.size(); i++){
			int k = mii[i]-'0';
			if(k >= 1){
				k--;
				mii[i] = char('0'+k);
				mii[0] = '1';
				break;
			}
		}
	}

	cout << mii << " " << mxx; 

	return;
}

int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int tc = 1;
	// cin >> tc;
	for(int i = 1; i <= tc; i++){
		// cout << "Case #" << i << ": ";
		solve();
	}

	return 0;
}
