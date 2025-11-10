#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m,k;
    cin>> n>> m>> k;
    
    vector<vector<pair<int,pair<int,bool>>>> g(n+1);
    for (int i=0; i<m; i++) {
        int u,v,w;
        cin>> u>> v>> w;
        g[u].push_back({v,{w,0}});
        g[v].push_back({u,{w,0}});
    }
    
    vector<int> to(k);
    for (int i=0; i<k; i++) {
        int v,w;
        cin>> v>> w;
        to[i]=v;
        g[1].push_back({v,{w,1}});
    }
    
    vector<pair<int,bool>> dist(n+1);
    for (int i=1; i<=n; i++) {dist[i].first = LLONG_MAX; dist[i].second = 1;}
    priority_queue<pair<int,pair<int,bool>>, vector<pair<int,pair<int,bool>>>, greater<pair<int,pair<int,bool>>>> pq;
    pq.push({0,{1,0}});
    dist[1].first=0;
    dist[1].second=0;

    while (!pq.empty()) {
        int d=pq.top().first, cur=pq.top().second.first;
        bool use = pq.top().second.second;
        pq.pop();

        if (d > dist[cur].first) continue;

        for (auto &x : g[cur]) {
            int v=x.first, w=x.second.first, n_use=x.second.second;

            if (dist[cur].first + w == dist[v].first && dist[v].second == 1) dist[v].second = n_use || use;
            if (dist[cur].first + w < dist[v].first) {
                dist[v].first = dist[cur].first + w;
                dist[v].second = n_use || use;
                pq.push({dist[v].first, {v, n_use || use}});
            }
        }
    }

    int ans=0;
    for (int i=0; i<k; i++) {
        if (!dist[to[i]].second) ans++;
    }
    cout<< ans;
}