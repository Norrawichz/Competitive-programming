#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll dist[501][501];
ll mx = LONG_LONG_MAX;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, q;
    cin>> n>> m>> q;

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            if (i==j) dist[i][j] = 0;
            else dist[i][j] = mx;
        }
    }

    for (int i=0; i<m; i++) {
        ll a,b,c;
        cin>> a>> b>> c;
        dist[a][b] = min(dist[a][b], c);
        dist[b][a] = min(dist[b][a], c);
    }

    for (int k=1; k<=n; k++) {
        for (int i=1; i<=n; i++) {
            for (int j=1; j<=n; j++) {
                if (dist[i][j] > dist[i][k] + dist[k][j] && dist[i][k] != mx && dist[k][j] != mx) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }

    for (int i=0; i<q; i++) {
        int a, b;
        cin>> a>> b;
        cout<< ((dist[a][b] != mx) ? dist[a][b] : -1) << endl;
    }
}