#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    cin>> n>> m;

    vector<vector<int>> g(n, vector<int>(m));
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin>> g[i][j];
        }
    }

    for (int i=1; i<n; i++) {
        g[i][0] += g[i-1][0];
    }
    for (int i=1; i<m; i++) {
        g[0][i] += g[0][i-1];
    }

    for (int i=1; i<n; i++) {
        for (int j=1; j<m; j++) {
            g[i][j] += max(g[i-1][j] , g[i][j-1]);
        }
    }
    cout<< g[n-1][m-1]<<endl;

}