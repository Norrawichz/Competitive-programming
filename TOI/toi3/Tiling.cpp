#include <bits/stdc++.h>
using namespace std;

int n,di[4] = {-1, 0, 1, 0}, dj[4] = {0, 1, 0, -1};

int dfs(int ci, int cj, int val,vector<vector<bool>> &vst, vector<vector<int>> &g) {
    int sm=0;
    for (int e=0; e<4; e++) {
        int ni=ci+di[e], nj=cj+dj[e];
        if (ni<0 || nj<0 || ni>=n || nj>=n || g[ni][nj] != val || vst[ni][nj]) continue;
        vst[ni][nj] = true;
        sm += 1 + dfs(ni,nj, val,vst, g);
    }
    return sm;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin>> n;

    vector<vector<int>> g(n, vector<int>(n));
    vector<vector<bool>> valid(n, vector<bool>(n, 0));
    for (int i=0; i<n; i++) for (int j=0; j<n; j++) {
        cin>> g[i][j];
    }

    int cnt=0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (g[i][j] == 0) continue;
            vector<vector<bool>> vst(n, vector<bool>(n, 0));
            vst[i][j] = true;
            int x = dfs(i, j, g[i][j], vst,g)+1;
            if (x == 3) {
                valid[i][j] = true;
            }
        }
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (valid[i][j]) {
                if (i-1 >=0 && j-1>=0 && g[i-1][j] == g[i][j] && g[i][j-1] == g[i][j]) {
                    g[i-1][j] = g[i][j-1] = g[i][j] = 0;
                    valid[i-1][j] = valid[i][j-1] = valid[i][j] = 0;
                    cnt++;
                }
                else if (i-1 >=0 && j+1<n && g[i-1][j] == g[i][j] && g[i][j+1] == g[i][j]) {
                    g[i-1][j] = g[i][j+1] = g[i][j] = 0;
                    valid[i-1][j] = valid[i][j+1] = valid[i][j] = 0;
                    cnt++;
                }
                else if (i+1 <n && j+1<n && g[i+1][j] == g[i][j] && g[i][j+1] == g[i][j]) {
                    g[i+1][j] = g[i][j+1] = g[i][j] = 0;
                    valid[i+1][j] = valid[i][j+1] = valid[i][j] = 0;
                    cnt++;
                }
                else if (i+1 <n && j-1>=0 && g[i+1][j] == g[i][j] && g[i][j-1] == g[i][j]) {
                    g[i+1][j] = g[i][j-1]    = g[i][j] = 0;
                    valid[i+1][j] = valid[i][j-1] = valid[i][j] = 0;
                    cnt++;
                }
            }
        }
    }
    cout<< cnt;

}