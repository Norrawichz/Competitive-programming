#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9+7;
#define fi first
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    cin>> n>> m;

    vector<pair<pair<int,int>, int>> g;
    for (int i=0; i<m; i++) {
        int u,v,w;
        cin>> u>> v>> w;
        g.push_back({{u,v},w});
    }
    
    vector<int> dist(n, INF);
    dist[0] = 0;

    bool ok=true;
    for (int i=0; i<n-1; i++) {
        for (auto &e : g) {
            int u = e.first.first;
            int v = e.first.second;
            int w = e.second;
            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                ok=false;
            }
        }
        if (ok) break;
    }

    for (auto &e : g) {
        int u = e.first.first;
        int v = e.first.second;
        int w = e.second;
        if (dist[u] + w < dist[v]) {
            dist[v] = dist[u] + w;
            cout<< "Negative cycle";
            return 0;
        }
    }
    for (int i=0; i<n; i++) cout<< dist[i]<< " ";
}