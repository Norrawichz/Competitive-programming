#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m,k;
    cin>> n>> m>> k;

    vector<vector<pair<int,int>>> g(n+1);
    for (int i=0; i<m; i++) {
        int u,v,w;
        cin>> u>> v>> w;
        g[u].push_back({v,w});
    }

    vector<int> dist(n+1, INT_MAX);
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

    pq.push({0, k});
    dist[k] = 0;

    while (!pq.empty()) {
        int d=pq.top().first, cur=pq.top().second;
        pq.pop();

        if (d > dist[cur]) continue;

        for (auto x : g[cur]) {
            int v=x.first, w=x.second;
            if (dist[cur] + w < dist[v]) {
                dist[v] = dist[cur] + w;
                pq.push({dist[v], v});
            }
        }
    }

    int mx=0;
    for (int i=1; i<=n; i++) {
        if (dist[i] == INT_MAX) return -1;
        mx=max(mx, dist[i]);
    }
    return mx;
}