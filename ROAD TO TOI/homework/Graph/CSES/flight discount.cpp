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

    vector<vector<ll>> dist(n+1, vector<ll> (2, LLONG_MAX));
    priority_queue<pair<ll,pair<ll,ll>>, vector<pair<ll,pair<ll,ll>>>, greater<pair<ll,pair<ll,ll>>>> pq;
    pq.push({0,{1, 0}});
    dist[1][0] = 0;

    while (!pq.empty()) {
        ll d=pq.top().first, cur=pq.top().second.first, tk=pq.top().second.second;
        pq.pop();
        
        if (d > dist[cur][tk]) continue;

        for (auto x : g[cur]) {
            ll v=x.first, w=x.second;
            if (dist[cur][tk] + w < dist[v][tk]) {
                dist[v][tk] = dist[cur][tk] + w;
                pq.push({dist[v][tk], {v, tk}});
            }
            if (tk == 0 && dist[cur][tk] + w/2 < dist[v][1]) {
                dist[v][1] = dist[cur][tk] + w/2;
                pq.push({dist[v][1], {v, 1}});
            }
        }
    }
    cout<< dist[n][1];
}