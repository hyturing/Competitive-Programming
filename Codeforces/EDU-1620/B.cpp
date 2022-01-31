/* Author: hyturing - Hemant Kumar Yadav */
// Read the problem statement carefully and clearly.
#include "bits/stdc++.h"
using namespace std; 

#define ll long long
const ll  MOD = 1e9+7;

void solve(){

	// code here
	
	ll w, h;
	cin >> w >> h;

	ll w0, w1, h0, h1;
	vector<ll> w00, w11, h00, h11;
	cin >> w0;
	for(int i = 0; i < w0; i++){
		ll x; cin >> x;
		w00.push_back(x);
	}

	cin >> w1;
	for(int i = 0; i < w1; i++){
		ll x; cin >> x;
		w11.push_back(x);
	}

	cin >> h0;
	for(int i = 0; i < h0; i++){
		ll x; cin >> x;
		h00.push_back(x);
	}

	cin >> h1;
	for(int i = 0; i < h1; i++){
		ll x; cin >> x;
		h11.push_back(x);
	}

	vector<ll> mx;
	mx.push_back(w00[w0-1] - w00[0]);
	mx.push_back(w11[w1-1] - w11[0]);
	mx.push_back(h00[h0-1] - h00[0]);
	mx.push_back(h11[h1-1] - h11[0]);

	ll area, x1, x2, x3, y1, y2, y3;

	if(mx[0] > mx[1]){
		x1 = w00[0]; x2 = w00[w0-1]; y1 = 0; y2 = 0; x3 = w11[0]; y3 = h;
		area = abs(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
	}
	else{
		x1 = w11[0]; x2 = w11[w1-1]; y1 = h; y2 = h; x3 = w00[0]; y3 = 0;
		area = abs(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
	}

	if(mx[2] > mx[3]){
		x1 = 0; x2 = 0; y1 = h00[0]; y2 = h00[h0-1]; x3 = w; y3 = h11[0];
		area = max(area, abs(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2)));
	}
	else{
		x1 = w; x2 = w; y1 = h11[0]; y2 = h11[h1-1]; x3 = 0; y3 = h00[0];
		area = max(area, abs(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2)));
	}

	cout << area << "\n";

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
