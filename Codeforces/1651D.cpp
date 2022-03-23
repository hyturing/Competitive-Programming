/**
 *    Author: hyturing
 *    Created: 
**/

#include <bits/stdc++.h>
using namespace std; 

#define int long long
const int  MOD = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const int INF = 1e18;

void solve(){

    // code here
    
    int n;
    cin >> n;
    
    vector<pair<int,int>> v;
    map<pair<int,int>, int> vis;
    map<pair<int,int>, pair<int,int>> ans;
    queue<pair<int,int>> q;
    
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        
        v.push_back({x,y});
        vis[{x,y}] = 0;
    }
    
    for(int i = 0; i < n; i++){
        int x = v[i].first, y = v[i].second;
        
        if(vis.find({x-1, y}) == vis.end()){
            vis[{x-1, y}] = 1;
            ans[{x-1, y}] = {x-1,y};
            q.push({x-1, y});
        }
        if(vis.find({x+1, y}) == vis.end()){
            vis[{x+1, y}] = 1;
            ans[{x+1, y}] = {x+1,y};
            q.push({x+1, y});
        }
        if(vis.find({x, y-1}) == vis.end()){
            vis[{x, y-1}] = 1;
            ans[{x, y-1}] = {x,y-1};
            q.push({x, y-1});
        }
        if(vis.find({x, y+1}) == vis.end()){
            vis[{x, y+1}] = 1;
            ans[{x, y+1}] = {x,y+1};
            q.push({x, y+1});
        }
    }
    
    while(!q.empty()){
        pair<int,int> k = q.front(); q.pop();
        
        int x = k.first, y = k.second;
        
        if(vis.find({x-1, y}) != vis.end() && !vis[{x-1, y}]){
            vis[{x-1, y}] = 1;
            ans[{x-1, y}] = ans[k];
            q.push({x-1, y});
        }
        if(vis.find({x+1, y}) != vis.end() && !vis[{x+1, y}]){
            vis[{x+1, y}] = 1;
            ans[{x+1, y}] = ans[k];
            q.push({x+1, y});
        }
        if(vis.find({x, y+1}) != vis.end() && !vis[{x, y+1}]){
            vis[{x, y+1}] = 1;
            ans[{x, y+1}] = ans[k];
            q.push({x, y+1});
        }
        if(vis.find({x, y-1}) != vis.end() && !vis[{x, y-1}]){
            vis[{x, y-1}] = 1;
            ans[{x, y-1}] = ans[k];
            q.push({x, y-1});
        }
    }
    
    for(auto x: v) cout << ans[x].first << " " << ans[x].second << "\n";

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