#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9+7;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    cin>> n>> m;

    vector<vector<int>> dist(n, vector<int> (n, INF));
    for (int i=0; i<m; i++) {
        int u,v,w;
        cin>> u>> v>> w;
        dist[u][v]=w;
    }
    for (int i=0; i<n; i++) dist[i][i] = 0;

    for (int k=0; k<n; k++) {
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                if (dist[i][k] + dist[k][j] < dist[i][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }

    for (int i=0; i<n; i++) {
        for (int j=0 ;j<n; j++) {
            cout<< dist[i][j]<< " ";
        } 
        cout<< '\n';
    }
}