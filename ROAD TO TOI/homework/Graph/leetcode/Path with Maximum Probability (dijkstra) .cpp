#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, m, st, ed;
    cin>> n>> m>> st>> ed;

    vector<vector<pair<int,double>>> g(n);
    for (int i=0; i<m; i++) {
        int u,v;
        double w;
        cin>> u>> v>> w;
        g[u].push_back({v, w});
        g[v].push_back({u,w});
    }

    vector<double> dist(n,0);
    priority_queue<pair<double,int>, vector<pair<double,int>>, less<pair<double,int>>> pq;
    dist[st] = 1;
    pq.push({1, st});
  
    while (!pq.empty()) {
        int cur=pq.top().second;
        double d=pq.top().first;
        pq.pop();
        
        if (d < dist[cur]) continue;

        for (auto x : g[cur]) {
            int v=x.first;
            double w=x.second;
            if (dist[cur] * w > dist[v]) {
                dist[v] = dist[cur] * w;
                pq.push({dist[v], v});
            }
        }
    }
    cout<< dist[ed];
    

}