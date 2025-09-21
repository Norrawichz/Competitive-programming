#include <bits/stdc++.h>
using namespace std;

int n,m, mn=INT_MAX, dc[] = {-1,0,1};
vector<vector<int>> g;

void dfs(int r,int c, int sm) {
    if (r == n-1) {
        mn = min(mn, sm);
        return;
    }
    for (int i=0; i<3; i++) {
        if (dc[i] + c >= 0 && dc[i]+c < m) {
            dfs(r+1, dc[i]+c, sm+g[r+1][dc[i]+c]);
        }
    }
    
}
int main() {
    cin.tie(0)->sync_with_stdio(0);

    cin>> n>> m;
    g.resize(n);
    for (int i=0; i<n; i++) {
        g[i].resize(m);
        for (int j=0; j<m; j++) {
            cin>> g[i][j];
        }
    }

    for (int i=0; i<m; i++) {
        dfs(0, i, g[0][i]);
    }
    cout<< mn;
}