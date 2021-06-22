#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int n, m, k, ans(0);
	cin >> n >> m >> k;
	int require[n], given[m];
	for (int i = 0; i < n; ++i) cin >> require[i];
	for (int i = 0; i < m; ++i) cin >> given[i];
 
	int i = 0, j = 0;
	sort(require, require+n);
	sort(given, given+m);
	while (i < n && j < m){
		if (abs(require[i]-given[j]) <= k) {ans++; j++; i++;}
		else if (require[i] < given[j]) i++;
		else j++;
	}
 
	cout << ans;
	return 0;
}