#include <bits/stdc++.h>
using namespace std;

int n;
bool ok=0;

void findpar(int cur, vector<int> &par) {
    if (cur == par[cur]) return;

    cout<< char(cur)<< ' ';
    findpar(par[cur], par);
}

void dfs(int cur, int cnt, vector<bool> &vst, vector<int> &par, vector<vector<int>> &g) {
    if (cnt == n) {
        ok=1;
        findpar(cur,par);
        return;
    }

    for (auto &x : g[cur]) {
        if (vst[x]) continue;
        vst[x] = true;
        par.push_back(x);
        dfs(x, cnt+1, vst, par, g);
        if (ok) return;

        par.pop_back();
        vst[x] = false;
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    cin>> n;

    vector<vector<int>> g('Z'+1);
    for (int i=0; i<n; i++) {
        string a;
        cin>> a;
        g[a[0]].push_back(a[1]);
        g[a[1]].push_back(a[0]);
    }

    for (int i='A'; i<='Z' && !ok; i++) {
        vector<bool> vst('Z'+1, 0);
        vector<int> par('Z'+1);
        iota(par.begin(), par.end(), 0);
        vst[i] = true;

        dfs(i, 0, vst, par, g);
    }

}