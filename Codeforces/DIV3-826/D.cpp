/**
 *    Author: hyturing
 *    Created: 
**/

#include <bits/stdc++.h>
using namespace std; 

#define int long long
#define sz(x) ((int)(x).size())
#define all(x) x.begin(),x.end()
#define endl "\n"
#define pb push_back

const int  MOD = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const long long INF = 1e18;

int ans;
bool flag;
void MergeSortedIntervals(vector<int>& v, int s, int m, int e) {
	
	vector<int> temp;

	int i, j;
	i = s;
	j = m + 1;

	bool ok = true;

	int mi = INF;
	int mx = 0;

	for (int k = s; k <= m; k++) {
		mi = min(mi, v[k]);
		mx = max(mx, v[k]);
	}

	if (mx-mi != m-s) {
		flag = true;
	}

	mi = INF;
	mx = 0;

	for (int k = m+1; k <= e; k++) {
		mi = min(mi, v[k]);
		mx = max(mx, v[k]);
	}

	if (mx-mi != e-m-1) {
		flag = true;
	}

	while (i <= m && j <= e) {

		if (v[i] <= v[j]) {
			temp.push_back(v[i]);
			++i;
		}
		else {
			if (ok) {
				ans++;
				ok = false;
			}
			temp.push_back(v[j]);
			++j;
		}

	}

	while (i <= m) {
		temp.push_back(v[i]);
		++i;
	}

	while (j <= e) {
		temp.push_back(v[j]);
		++j;
	}

	for (int i = s; i <= e; ++i)
		v[i] = temp[i - s];

}

void MergeSort(vector<int>& v, int s, int e) {
	if (s < e) {
		int m = (s + e) / 2;
		MergeSort(v, s, m);
		MergeSort(v, m + 1, e);
		MergeSortedIntervals(v, s, m, e);
	}
}

void solve() {

    // code here
    
    int n; cin >> n;
    ans = 0;
    vector<int> a(n);
    flag = false;

    for (auto &x: a) cin >> x;

    MergeSort(a, 0, n-1);

	if (flag) {
		cout << -1 << endl;
		return;
	}

	cout << ans << endl;

    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    cin >> tc;
    
    for (int i = 1; i <= tc; i++) {
        // cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}

/*-------------------------------------------------------------------------------------------------------*/
