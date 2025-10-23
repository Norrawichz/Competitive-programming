#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int m, x, y;
    cin>> m>> x>> y;

    vector<vector<int>> g(m+1, vector<int>(m+1));
    vector<vector<bool>> vst(m+1, vector<bool>(m+1, false));
    for (int i=1; i<=m; i++) for (int j=1; j<=m; j++) cin>> g[i][j];

    queue<pair<int,int>> q;
    
    vst[y][x] = true;
    q.push({y,x});
    int mx=g[y][x];
    int di[4] = {-1, 1, 0, 0}, dj[4] = {0, 0, -1, 1};

    while (!q.empty()) {
        int ci=q.front().first, cj=q.front().second;
        q.pop();

        for (int e=0; e<4; e++) {
            int ni=ci+di[e], nj=cj+dj[e];
            if (ni<1 || nj<1 || ni>m || nj>m || vst[ni][nj] || g[ni][nj] == 100 || g[ni][nj] <= g[ci][cj]) continue;
            mx=max(mx, g[ni][nj]);
            vst[ni][nj] = true;
            q.push({ni,nj});
        }
    }
    cout<< mx;
}