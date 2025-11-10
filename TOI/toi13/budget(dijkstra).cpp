#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    cin>> n>> m;

    int x,y,z;
    cin>> x>> y>> z;

    vector<vector<pair<ll,ll>>> g(n);
    for (int i=0; i<m; i++) {
        int u,v,w;
        cin>> u>> v>> w;
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }

    vector<ll> distx(n, LLONG_MAX), disty(n, LLONG_MAX);
    priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> pq;
    pq.push({0,x});
    distx[x]=0;
    
    while (!pq.empty()) {
        int d=pq.top().first, cur=pq.top().second;
        pq.pop();

        if (d > distx[cur]) continue;

        for (auto x : g[cur]) {
            int v=x.first, w=x.second;
            if (distx[cur] + w < distx[v] && distx[cur] + w <= z) {
                distx[v] = distx[cur]+w;
                pq.push({distx[v], v});
            }
        }
    }

    if (distx[y] != LLONG_MAX) {
        cout<< y<< ' '<< distx[y]<< ' '<< 0;
        return 0;
    }
    disty[y] = 0;
    pq.push({0, y});
    while (!pq.empty()) {
        int d=pq.top().first, cur=pq.top().second;
        pq.pop();

        if (d > disty[cur]) continue;

        for (auto x : g[cur]) {
            int v=x.first, w=x.second;
            if (disty[cur] + w < disty[v]) {
                disty[v] = disty[cur]+w;
                pq.push({disty[v], v});
            }
        }
    }

    ll node=LLONG_MAX, dist=LLONG_MAX;
    for (int i=0; i<n; i++) {
        if (distx[i] <= z && (disty[i] < dist || (disty[i] == dist && i < node))) {
            node = i;
            dist = disty[i];
        }
    }
    cout<< node<< ' '<< distx[node]<<' '<< dist;
}