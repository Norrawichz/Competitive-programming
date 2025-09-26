#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    cin.tie(0)->sync_with_stdio(0);
    ll n,m;
    cin>> n>> m;

    vector<vector<pair<ll,ll>>> g(n+1);
    for (int i=0; i<m; i++) {
        ll u,v,w;
        cin>> u>> v>> w;
        g[u].push_back({v, w});
    }

    vector<vector<ll>> dist(2, vector<ll>(n+1,LONG_LONG_MAX/4));
    priority_queue<pair<ll,pair<ll,ll>>, vector<pair<ll,pair<ll,ll>>>, greater<pair<ll,pair<ll,ll>>>> pq;
    pq.push({0, {1,0}});
    dist[0][1] = 0;
    while (!pq.empty()) {
        ll d=pq.top().first,u=pq.top().second.first, tk=pq.top().second.second;
        pq.pop();
        if (d != dist[tk][u]) continue;
        for (auto e : g[u]) {
            ll v=e.first, w=e.second;

            if (dist[tk][v] > dist[tk][u]+w) {
                dist[tk][v]=dist[tk][u]+w;
                pq.push({dist[tk][v], {v, tk}});
            }
            if (tk == 0 && dist[1][v] > dist[tk][u]+w/2) {
                dist[1][v] = dist[tk][u]+w/2;
                pq.push({dist[1][v], {v, 1}});
            }
        }
    }
    cout<< dist[1][n];
}