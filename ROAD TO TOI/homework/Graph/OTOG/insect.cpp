#include <bits/stdc++.h>
using namespace std;

bool found = 0;

void dfs(int cur, int prev, vector<int> &vst, vector<vector<int>> &g, vector<int> &dist) {
    //cout<< "de "<<cur<<'\n';
    for (auto &x : g[cur]) {
        if (vst[x] == 2 || x == prev) continue;
        //cout<< x<< '\n';
        if (vst[x]) {
            if ((dist[cur] - dist[x]+1)% 2) found = 1;
            //cout<<"dist "<< dist[cur] - dist[x] + 1<< '\n';
            vst[x] = 2;
            continue;
        }

        vst[x] = 1;
        dist[x] = dist[cur] + 1;
        dfs(x, cur, vst, g, dist);
        if (found) return;
        vst[x] = 2;
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        found = 0;
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

            vector<int> dist(n, 0);
            dist[i] = 1;
            //cout<< i<< '\n';
            vst[i] = 1;
            dfs(i, i, vst, g, dist);
            if (found) break;
            vst[i] = 2;
        }   

        if (found) cout<< "Gay found!\n";
        else cout<< "Gay not found!\n";
    }
}