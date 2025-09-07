#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>> n>> m;
    vector<vector<pair<int,int>>> g(n+1);
    for (int i=0; i<m; i++) {
        int u,v,w;
        cin>> u>> v>> w;
        g[u].push_back({v,w});
    }

    vector<ll> dist(n+1, LONG_LONG_MIN);
    priority_queue<pair<ll,int>, vector<pair<ll,int>>> pq;
    dist[1] = 0;
    pq.push({0, 1});

    while (!pq.empty()) {
        ll d=pq.top().first, node=pq.top().second;
        pq.pop();
        if (d < dist[node]) continue;
        for (auto x : g[node]) {
            ll v=x.first, w=x.second;
            if (dist[node]+w > dist[v]) {
                dist[v]=dist[node]+w;
                pq.push({dist[v], v});
            }
        }
    }
    if (dist[n] > LONG_LONG_MAX || dist[n] < LONG_LONG_MIN) {
        cout<< -1;
    }
    else cout<< dist[n];
}