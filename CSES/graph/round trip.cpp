#include <bits/stdc++.h>
using namespace std;

bool ok=false;
vector<int> ans;
void findrt(int cur, int tar, vector<int> &par) {
    if (cur == tar) {
        ans.push_back(cur);
        return;
    }

    ans.push_back(cur);
    findrt(par[cur], tar, par);
    return;
}

void dfs(int cur, vector<int> &par, vector<int> &vst, vector<vector<int>> &g) {

    for (auto &x : g[cur]) {
        if (par[cur] == x || vst[x] == 2) continue;

        if (vst[x]) {
            ok=true;
            ans.push_back(x);
            findrt(cur, x, par);
            return;
        }
        vst[x] = 1;
        par[x] = cur;
        dfs(x, par, vst, g);
        if (ok) return;
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
        g[v].push_back(u);
    }

    vector<int> par(n+1);
    iota(par.begin(), par.end(), 0);

    vector<int> vst(n+1, 0);

    for (int i=1; i<=n; i++) {
        if (vst[i] == 0) {
            vst[i] = 1;
            dfs(i, par, vst, g);
            if (ok) {
                cout<< ans.size()<< '\n';
                for (auto &x : ans) cout<< x<< ' ';
                return 0;
            }
            vst[i] = 2;
        }
    }
    cout<< "IMPOSSIBLE";
}