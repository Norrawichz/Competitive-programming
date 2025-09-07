#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin>> n>> m;
    vector<vector<pair<ll,ll>>> g(n+1);
    for (int i=0; i<m; i++) {
        ll a, b, c;
        cin>> a>> b>> c;
        g[a].push_back({b, c});
    }

    priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> pq;
    vector<ll> dist(n+1, LONG_LONG_MAX);
    pq.push({0, 1});
    dist[1] = 0;

    while (!pq.empty()) {
        ll d=pq.top().first, node=pq.top().second;
        pq.pop();
        if (d > dist[node]) continue;
        for (auto x : g[node]) {
            ll v=x.first, w=x.second;
            if (dist[node] + w < dist[v]) {
                dist[v] = dist[node] + w;
                pq.push({dist[v], v});
            }
        }
    }
    for (int i=1; i<=n; i++) {
        cout<< dist[i]<< " ";
    }
}