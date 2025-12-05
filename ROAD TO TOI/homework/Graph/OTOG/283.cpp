#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int k,n,m;
    cin>> k>> n>> m;

    vector<vector<bool>> g(n+1, vector<bool> (k+1, false));
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=m; j++) {
            int a;
            cin>> a;
            g[i][a] = true;
        }
    }

    int q;
    cin>> q;

    for (int i=1; i<=n; i++) {
        if (!g[i][q]) {
            cout<< i;
            return 0;
        }
    }
}