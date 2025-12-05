#include <bits/stdc++.h>
using namespace std;

bool cycle=0;

vector<int> ans;
void fnd(int cur, int tar, vector<int> &par) {
    if (cur == tar) {
        ans.push_back(cur);
        return;
    }
    fnd(par[cur], tar, par);
    ans.push_back(cur);
    return;
}

void dfs(int cur, vector<int> &par, vector<int> &vst, vector<vector<int>> &g) {
    for (auto &x : g[cur]) {
        if (vst[x] == 2) continue;
        if (vst[x]) {
            cycle = true;
            fnd(cur, x, par);
            ans.push_back(x);
            return;
        }
        vst[x] = 1;
        par[x] = cur;
        dfs(x, par, vst, g);
        if (cycle) return;
        vst[x] = 2;
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    cin>> n>> m;

    vector<vector<int>> g(n+1);
    for (int i=0; i<m; i++) {
        int u,v;
        cin>> u>> v;

        g[u].push_back(v);
    }

    vector<int> par(n+1);
    vector<int> vst(n+1, 0);
    iota(par.begin(), par.end(), 0);

    for (int i=1; i<=n; i++) {
        if (vst[i] == 2) continue;

        vst[i] = 1;
        dfs(i, par, vst, g);
        if (cycle) break;
        vst[i] = 2;
    }
    if (cycle) {
        cout<< ans.size()<< '\n';
        for (auto &x : ans) cout<< x<< ' ';
    }
    else cout<< "IMPOSSIBLE";
}