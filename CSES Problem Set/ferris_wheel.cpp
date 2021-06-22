#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, x;
	cin >> n >> x;
	int arr[n];
	for (int i = 0; i < n; i++) cin >> arr[i];
	sort(arr, arr+n);
	int i(0), j(n-1), ans(0);
	while (i<=j){
		if (arr[i]+arr[j]>x) j--;
		else {i++; j--;}
		ans++;
	}
	cout << ans;
	return 0;
}
