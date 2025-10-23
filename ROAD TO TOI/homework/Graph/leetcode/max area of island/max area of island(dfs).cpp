#include <bits/stdc++.h>
using namespace std;

int n,m,di[4] = {-1,1,0,0}, dj[4] = {0,0,-1,1};

int dfs(int i, int j, vector<vector<int>> &c) {
    int sm=0;
    for (int e=0; e<4; e++) {
        int ni=i+di[e], nj=j+dj[e];
        if (ni<0 || ni>=n || nj<0 || nj>=m || c[ni][nj]==0) continue;
        c[ni][nj] = 0;
        sm += dfs(ni,nj,c);
    }
    return sm+1;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin>> n>> m;

    vector<vector<int>> c(n, vector<int>(m));
    for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin>>c[i][j];

    int mx=0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (c[i][j] == 1) {
                c[i][j] = 0;
                mx = max(mx, dfs(i,j, c));
            }
        }
    }
    cout<< mx;
}