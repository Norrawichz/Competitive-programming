#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll INF = 1e17;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m, q;
    cin>> n>> m>> q;

    vector<vector<ll>> dist(n+1, vector<ll>(n+1, INF));
    for (int i=0; i<m; i++) {
        int u,v,w;
        cin>> u>> v>> w;
        dist[u][v] = (w < dist[u][v] ? w : dist[u][v]);
        dist[v][u] = (w < dist[v][u] ? w : dist[v][u]);
    }
    for (int i=1; i<=n; i++) dist[i][i]=0;

    for (int k=1; k<=n; k++) {
        for (int i=1; i<=n; i++) {
            for (int j=1; j<=n; j++) {
                if (dist[i][k] + dist[k][j] < dist[i][j]) dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }

    while (q--) {
        int u,v;
        cin>> u>> v;
        cout<< (dist[u][v]==INF? -1 : dist[u][v])<<'\n';
    }
}