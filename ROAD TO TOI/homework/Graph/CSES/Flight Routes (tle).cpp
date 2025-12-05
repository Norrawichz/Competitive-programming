#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m,k;
    cin>>n>>m>>k;
    
    vector<vector<pair<int,int>>> g(n+1);
    for (int i=0; i<m; i++) {
        int u,v,w;
        cin>>u>>v>>w;
        g[u].push_back({v,w});
    }
    
    
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    pq.push({0,1});
    vector<int> ans;
    
    while (!pq.empty()) {
        int dist=pq.top().first, cur=pq.top().second;
        pq.pop();
        
        if (dist > )
        for (auto x : g[cur]) {
            int v=x.first, w=x.second;
            pq.push({w+dist, v});
            if (v==n) {
                ans.push_back(w+dist);
                if (ans.size() == k*10){
                    sort(ans.begin(), ans.end());
                    for (int i=0; i<k; i++) cout<< ans[i]<< ' ';
                    return 0;
                }
            }
        }
    }
} 