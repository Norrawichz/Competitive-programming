#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m,k;
    cin>> n>> m;

    vector<vector<pair<int,int>>> g(n+1);
    for (int i=0; i<m; i++) {
        int u,v,w;
        cin>> u>> v>> w;
        u++;
        v++;
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }

    cin>> k;
    for (int i=0; i<k; i++) {
        int a,c;
        cin>> a>> c;
        a++;
        g[0].push_back({a,c});
    }

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    vector<int> dist(n+1, LLONG_MAX);
    pq.push({0, 0});
    dist[0]=0;
    while (!pq.empty()) {
        int d=pq.top().first, cur=pq.top().second;
        pq.pop();

        if (d < dist[cur]) continue;

        for (auto x : g[cur]) {
            int v=x.first, w=x.second;
            if (dist[cur] + w < dist[v]) {
                dist[v] = dist[cur] + w;
                pq.push({dist[v], v});
            }
        }
    }
    cout<< dist[1];
}