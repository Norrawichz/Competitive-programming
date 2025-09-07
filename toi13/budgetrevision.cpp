#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, x, y, z;
    cin>> n>> m>> x>> y>> z;
    vector<vector<pair<int,int>>> g(n);
    for (int i=0; i<m; i++) {
        int u, v, w;
        cin>>u>>v>>w;
        g[u].push_back({v, w});
        g[v].push_back({u, w});
    }

    vector<ll> dist(n, LONG_LONG_MAX);
    vector<bool> vst1(n, false);
    vector<ll> rdist(n, LONG_LONG_MAX);
    vector<bool> vst2(n, false);
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    pq.push({0, x});
    dist[x]=0;
    
    while (!pq.empty()) {
        int d=pq.top().first, node=pq.top().second;
        pq.pop();
        if (vst1[node]) continue;
        vst1[node]=true;
        for (auto x : g[node]) {
            int v=x.first, w=x.second;
            if (dist[node]+w<dist[v] && dist[node]+w<=z) {
                dist[v]=dist[node]+w;
                pq.push({dist[v], v});
            }
        }
    }

    pq.push({0, y});
    rdist[y]=0;
    while (!pq.empty()) {
        int d=pq.top().first, node=pq.top().second;
        pq.pop();
        if (vst2[node]) continue;
        vst2[node]=true;
        for (auto x : g[node]) {
            int v=x.first, w=x.second;
            if (rdist[node]+w<rdist[v]) {
                rdist[v]=rdist[node]+w;
                pq.push({rdist[v], v});
            }
        }
    }

    if (dist[y] <= z) cout<< y<<" "<<dist[y]<<" "<< 0;
    else {
        ll mn = LONG_LONG_MAX;
        int node = -1;
        for (int i=0; i<n; i++) {
            if (dist[i] <= z && rdist[i]<mn) {
                mn = rdist[i];
                node = i;
            }
        }
        cout<< node<<" "<< dist[node]<<" "<< mn;
    }
    
}