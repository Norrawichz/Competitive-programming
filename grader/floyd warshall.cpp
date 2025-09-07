#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin>> n>> m;
    int dist[n][n];
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<n; j++) {
            dist[i][j] = INT_MAX;
        }
    }
    for (int i = 0; i < n; i++) {
        dist[i][i] = 0;
    }

    for (int i = 0; i<m; i++) {
        int u, v, w;
        cin>> u>> v>> w;
        dist[u][v] = w;
    }

    for (int k = 0; k<n; k++) {
        for (int i = 0; i<n; i++) {
            for (int j = 0; j<n; j++) {
                if (dist[i][k] != INT_MAX && dist[k][j] != INT_MAX) dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<n; j++) {
            if (dist[i][j] != INT_MAX) {
                cout<< dist[i][j]<<" ";
            }
            else {
                cout<< -1<< " ";
            }
        }
        cout<< endl;
    }
    return 0;
}