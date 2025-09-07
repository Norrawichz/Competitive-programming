#include <bits/stdc++.h>
using namespace std;

vector<vector<pair<pair<int,int>, int>>> g;
vector<bool> vst;
vector<pair<int,int>> pos;
int n, m;
int mini, minj;

void dfs(int cur, int i, int j) {
    if (vst[cur]) return;
    vst[cur] = true;

    mini = min(i, mini);
    minj = min(j, minj);
    pos[cur] = {i, j}; 
    for (auto &x : g[cur]) {
        dfs(x.second, x.first.first + i, x.first.second+j);
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>> m>> n;

    g.resize(m*n);
    vst.resize(m*n);
    pos.resize(m*n);

    for (int i = 0; i<m*n-1; i++) {
        int u, v;
        char c;
        cin>> u>> c>> v;

        if (c == 'U') {
            g[u].push_back({{1, 0}, v});
            g[v].push_back({{-1, 0}, u});
        }
        else {
            g[u].push_back({{0, 1}, v});
            g[v].push_back({{0, -1}, u});
        }
    }

    dfs(0, 0, 0);
    
    vector<vector<int>> ans(m, vector<int>(n));
    for (int i = 0; i<m*n; i++) {
        int r = pos[i].first + abs(mini), c = pos[i].second + abs(minj);
        ans[r][c] = i;
    }
    for (int i = 0; i<m; i++) {
        for (int j = 0; j<n; j++) {
            cout<< ans[i][j]<< " ";
        }
        cout<< endl;
    }
    return 0;
}