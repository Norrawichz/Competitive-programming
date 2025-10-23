#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, x, y, z;
    cin>> n>> m>> x>> y>> z;
    vector<vector<pair<int,int>>> g(n);
    vector<long long> dis(n, LONG_LONG_MAX);
    vector<int> vst(n, 0);
    vector<long long> rdis(n, LONG_LONG_MAX);
    vector<int> vst2(n, 0);
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq2;

    for (int i = 0; i<m; i++) {
        int u,v,w;
        cin>>u>>v>>w;
        g[u].push_back({v, w});
        g[v].push_back({u, w});
    }
    dis[x] = 0;
    pq.push({0, x});
    while(!pq.empty()) {
        int d = pq.top().first, node = pq.top().second;
        pq.pop();
        if (vst[node]) continue;
        vst[node] = 1;
        for (auto x : g[node]) {
            int v = x.first,w=x.second;
            if (dis[node]+w<dis[v] && dis[node]+w <= z) {
                dis[v]=dis[node]+w;
                pq.push({dis[v],v});
            }
        }
    }

    rdis[y] = 0;
    pq2.push({0, y});
    while(!pq2.empty()) {
        int d = pq2.top().first, node = pq2.top().second;
        pq2.pop();
        if (vst2[node]) continue;
        vst2[node] = 1;
        for (auto x : g[node]) {
            int v=x.first,w=x.second;
            if (rdis[node]+w<rdis[v]) {
                rdis[v] = rdis[node]+w;
                pq2.push({rdis[v], v});
            }
        }
    }

    if (dis[y] <= z) {
        cout<< y<<" "<<dis[y]<<" "<< 0;
    }
    else {
        long long mn = LONG_LONG_MAX;
        int node = -1;
        for (int i = 0; i<n; i++) {
            if (dis[i] <= z) {
                if (rdis[i] < mn) {
                    mn = rdis[i];
                    node = i;
                }
            }
        }
        cout<< node<< " "<<dis[node]<<" "<<mn;
    }
}
