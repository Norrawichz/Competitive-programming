#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    cin>> n>> m;

    vector<vector<pair<ll,ll>>> g(n+1);
    for (int i=0; i<m; i++) {
        int u,v,w;
        cin>> u>> v>> w;
        g[u].push_back({v,w});
    }

    vector<ll> dist(n+1, LLONG_MAX);
    priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> pq;
    pq.push({0, 1});
    dist[1]=0;

    while (!pq.empty()) {
        ll d=pq.top().first, cur=pq.top().second;
        pq.pop();

        if (d > dist[cur]) continue;

        for (auto x : g[cur]) {
            ll v=x.first, w=x.second;
            if (dist[cur] + w < dist[v]) {
                dist[v] = dist[cur] + w;
                pq.push({dist[v], v});
            }
        }
    }
    for (int i=1; i<=n; i++) cout<< dist[i]<< ' ';
}