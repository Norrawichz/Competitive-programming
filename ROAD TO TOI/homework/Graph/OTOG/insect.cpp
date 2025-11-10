#include <bits/stdc++.h>
using namespace std;

bool dfs(int cur, int par, int member, vector<bool> &vst, vector<vector<int>> &g) {
    
    for (auto &x : g[cur]) {
        if (x == par) continue;
        if (vst[x]) {
            return member % 2;
        }
        else {
            vst[x] = true;
            return dfs(x, cur, member+1, vst, g);
        }
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n,m;
        cin>> n>> m;

        vector<vector<int>> g(n);
        for (int i=0; i<m; i++) {
            int u,v;
            cin>> u>> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        
        vector<bool> vst(n, false);

        bool found = 0;
        for (int i=0; i<n; i++) {
            if (vst[i]) continue;
            vst[i] = true;

            found = dfs(i, i, 1, vst, g); 
            
        }
        if (found) cout<< "Gay found!\n";
        else cout<<"Gay not found!\n";
    }
}