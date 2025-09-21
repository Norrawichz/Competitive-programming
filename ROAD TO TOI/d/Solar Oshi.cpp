#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,m,q,s,t;
    cin>> n>> m>> q>> s>> t;

    vector<pair<ll,pair<ll,ll>>> id(m);
    vector<vector<pair<ll,ll>>> g(n);
    for (ll i=0; i<m; i++) {
        ll u,v,w;
        cin>> u>> v>> w;
        id[i].first=u;
        id[i].second.first=v;
        id[i].second.second=w;
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }

    vector<ll> dist(n, 1e18), rdist(n, 1e18);
    vector<bool> vst1(n,0), vst2(n,0);
    priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> pq;
    pq.push({0, s});
    dist[s] = 0;
    while (!pq.empty()) {
        ll u=pq.top().second;
        pq.pop();
        if (vst1[u]) continue;
        vst1[u] = 1;

        for (auto e : g[u]) {
            ll w=e.second, v=e.first;
            if (dist[v] > dist[u]+w) {
                dist[v] = dist[u]+w;
                pq.push({dist[v], v});
            }
        }
    }
    
    pq.push({0, t});
    rdist[t]=0;
    while (!pq.empty()) {
        ll u=pq.top().second;
        pq.pop();
        if (vst2[u]) continue;
        vst2[u]=1;

        for (auto e : g[u]) {
            ll v=e.first, w=e.second;
            if (rdist[v] > rdist[u]+w) {
                rdist[v] = rdist[u]+w;
                pq.push({rdist[v], v});
            }
        }
    }
    for (int i=0; i<q; i++) {
        ll q1;
        cin>> q1;
        cout<< min(dist[id[q1].first] + rdist[id[q1].second.first] + id[q1].second.second, rdist[id[q1].first] + dist[id[q1].second.first] + id[q1].second.second)<< "\n";
    }
    return 0;
}