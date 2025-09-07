#include <bits/stdc++.h>
using namespace std;

bool t[5005][5005] = {};
int deg[5005] = {};

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int n,m;
    cin>> n>> m;
    for (int i=0; i<m; i++) {
        int a,b;
        cin>> a>> b;
        t[a][b] = t[b][a] = true;
        deg[a]++;
        deg[b]++;
    }

    int res = INT_MAX;
    for (int i=1; i<=n; i++) {
        for (int j=i+1; j<=n; j++) {
            if (t[i][j]) {
                for (int k=j+1; k<=n; k++) {
                    if (t[k][i] && t[k][j]) {
                        res = min(res, deg[k] + deg[j] + deg[i]);
                    }
                }
            }
        }
    }
    if (res == INT_MAX) cout<< -1;
    else cout<< res - 6;
}