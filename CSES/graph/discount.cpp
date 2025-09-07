#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>> n>> m;
    vector<vector<pair<int,int>>> g(n+1);
    for (int i=0; i<m; i++) {
        int u, v, w;
        cin>> u>> v>> w;
        g[u].push_back({v, w});
    }
    
    vector<vector<int>> dist(n+1, vector<int>(2, LONG_LONG_MAX));
    priority_queue<pair<int, pair<int,int>>, vector<pair<int, pair<int,int>>>, greater<pair<int, pair<int,int>>>> pq;
    pq.push({0, {1, 0}});
    dist[1][0] = 0;
    
    while (!pq.empty()) {
        int d=pq.top().first, node=pq.top().second.first, tk=pq.top().second.second;
        pq.pop();
        if (d > dist[node][tk]) continue;
        for (auto x : g[node]) {
            int v=x.first, w=x.second;
            if (dist[node][tk] + w < dist[v][tk]) {
                dist[v][tk] = dist[node][tk] + w;
                pq.push({dist[v][tk], {v, tk}});
            }
            if (tk == 0 && dist[node][tk] + w/2 < dist[v][1]) {
                dist[v][1] = dist[node][tk] + w/2;
                pq.push({dist[v][1], {v, 1}});
            }
        }
    }
    cout<< dist[n][1];
}