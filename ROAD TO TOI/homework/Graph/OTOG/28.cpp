#include <bits/stdc++.h>
using namespace std;

int t;
bool found = 0;

void dfs(int cur, int cnt, int par, vector<vector<int>> &g) {
    if (cnt == (t+1)/2) {
        cout<< cur;
        found = 1;
        return;
    }

    for (auto &x : g[cur]) {
        if (x == par) continue;
        dfs(x, cnt+1, cur, g);
        if (found) return;
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin>> t;

    vector<vector<int>> g(10001);
    vector<int> deg(10001, 0);
    
    for (int i=0; i<t; i++) {
        int u,v;
        cin>> u>> v;
        g[u].push_back(v);
        g[v].push_back(u);
        deg[u]++;
        deg[v]++;
    }

    for (int i=1; i<=10000; i++) {
        if (deg[i] == 1) {
            dfs(i, 1, i, g);
            return 0;
        }
    }
}