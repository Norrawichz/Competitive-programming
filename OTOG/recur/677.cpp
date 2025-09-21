#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> g;
vector<vector<bool>> vst;
int di[]={-1,1,0,0}, dj[]={0,0,-1,1}, ans=INT_MIN, n, m;

void bt(int i, int j, int sm) {
    if (i==n-1 && j==m-1) {
        ans = max(ans, sm);
    }
    for (int e=0; e<4; e++) {
        int ni=di[e]+i, nj=dj[e]+j;
        if (ni<0 || ni>=n || nj<0 || nj>=m || vst[ni][nj]) continue;
        vst[ni][nj]=1;
        bt(ni, nj, sm+g[ni][nj]);
        vst[ni][nj]=0;
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin>> n>> m;
    g.resize(n);
    vst.resize(n);
    for (int i=0; i<n; i++) {
        g[i].resize(m);
        vst[i].resize(m,0);
        for (int j=0; j<m; j++) {
            char c;
            cin>> c;
            if (c=='*') g[i][j] = 1;
            else if (c=='X') g[i][j] = -1;
            else g[i][j] = 0;
        }
    }
    vst[0][0] = 1;
    bt(0,0,3);
    cout<< ans;

}