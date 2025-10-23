#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    cin>> n>> m;

    vector<vector<pair<int,int>>> g(n+1);
    for (int i=0; i<m; i++) {
        int u,v,w;
        cin>> u>> v>> w;
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    vector<int> dist(n+1, LLONG_MAX);
    vector<int> par(n+1, -1);
    dist[n]=0;
    pq.push({0, n});
    bool valid=0;

    while (!pq.empty()) {
        int d=pq.top().first, cur=pq.top().second;
        pq.pop();

        if (d > dist[cur]) continue;

        for (auto x : g[cur]) {
            int v=x.first, w=x.second;
            if (dist[cur] + w < dist[v]) {
                par[v]=cur;
                dist[v]=dist[cur]+w;
                pq.push({dist[v], v});
            }
        }
    }
    queue<int> q;
    q.push(1);
    if (par[1]==-1) {
        cout<< -1;
        return 0;
    }
    while (!q.empty()) {
        int cur=q.front();
        q.pop();
        if (cur==-1) break;

        cout<< cur<<" ";
        q.push(par[cur]);

    }
}