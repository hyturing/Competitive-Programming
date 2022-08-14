/**
 *	Author: hyturing
 *	Created: 16 Jun 2022 10:50:33 IST
**/

#include <bits/stdc++.h>
using namespace std; 

#define ll long long
const int  MOD = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const ll INF = 1e18;

ll merge(int arr[], int left, int mid, int right) {
 	int i = left, j = mid, k = 0;
 	ll invCount = 0;
 	int temp[(right - left + 1)];
 
 	while ((i < mid) && (j <= right)) {
 	  if (arr[i] < arr[j]) {
 	    temp[k] = arr[i];
 	    ++k;
 	    ++i;
 	  } else {
 	    temp[k] = arr[j];
 	    invCount += (mid - i);
 	    ++k;
 	    ++j;
 	  }
 	}
 
 	while (i < mid) {
 	  temp[k] = arr[i];
 	  ++k;
 	  ++i;
 	}
 
 	while (j <= right) {
 	  temp[k] = arr[j];
 	  ++k;
 	  ++j;
 	}
 
 	for (i = left, k = 0; i <= right; i++, k++) {
 	  arr[i] = temp[k];
 	}
 
  	return invCount;
}

ll mergeSort(int arr[], int left, int right) {
 	ll invCount = 0;
	
	if (right > left) {
	  int mid = (right + left) / 2;
	  invCount = mergeSort(arr, left, mid);
	  invCount += mergeSort(arr, mid + 1, right);
 	  invCount += merge(arr, left, mid + 1, right);
  	}

 	return invCount;
}
 
ll getInversions(int arr[], int n) {
	return mergeSort(arr, 0, n - 1);
}

void solve() {

	// code here
	
	int n; cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		a[i]--;
	}

	cout << getInversions(a, n) << "\n";
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
