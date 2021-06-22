#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main()
{	
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
 
	string s;
	cin >> s;
	int count(0), max(0);
	for (int i = 1; i < s.size(); i++){
		if (s[i] == s[i-1]) count++;
		else{
			if (count>max) max = count;
			count = 0;
		}
	}
	if (count>max) max = count;
	if (count == s.size()-1) cout << count+1;
	else cout << max+1;
 
 
	return 0;
}