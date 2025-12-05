#include <bits/stdc++.h>
using namespace std;

bool cycle = false;

void dfs(int cur, int par, vector<int> &vst, vector<vector<int>> &g) {
    for (auto &x : g[cur]) {
        if (vst[x] == 2 || x == par) continue;
        if (vst[x]) {
            cycle=true;
            return;
        }
        vst[x] = 1;
        dfs(x, cur, vst, g);
        if (cycle) return;
        vst[x] = 2;
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    cin>> n>> m;

    vector<vector<int>> g(n);
    for (int i=0; i<m; i++) {
        int u,v;
        cin>> u>> v;

        g[u].push_back(v);
        g[v].push_back(u);
    }

    vector<int> vst(n, 0);
    for (int i=0; i<n; i++) {
        if (vst[i] == 2) continue;

        vst[i] = 1;
        dfs(i, i, vst, g);
        if (cycle) {
            cout<< "YES";
            return 0;
        }
        vst[i] = 2;
    }
    cout<< "NO";
}