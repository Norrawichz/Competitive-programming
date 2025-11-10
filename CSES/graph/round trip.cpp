#include <bits/stdc++.h>
using namespace std;
 
bool ok=0;
vector<int> ans;
 
void findrt(int cur, int tar, vector<int> &par) {
    if (cur == tar) {
        ans.push_back(cur);
        return;
    }
    
    findrt(par[cur], tar, par);
    ans.push_back(cur);
    return;
}
 
void dfs(int cur, vector<int> &par, vector<bool> &vst, vector<vector<int>> &g) {
    
    for (auto &x : g[cur]) {
        if (par[cur] == x) continue;
        
        if (vst[x]) {
            ok=true;
            findrt(cur, x, par);
            ans.push_back(x);
            
            cout<< ans.size()<< '\n';
            for (auto &e : ans) cout<< e<< ' ';
            return;
        }
        else {
            vst[x] = 1;
            par[x] = cur;
            dfs(x, par, vst, g);
            
            if (ok) return;
            par[x] = x;
            vst[x] = 0;
        }
    }
    return;
}
 
 
 
 
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    cin>> n>> m;
    
    set<int> gg;
    vector<vector<int>> g(n+1);
    for (int i=0; i<m; i++) {
        int u,v;
        cin>> u>> v;
        gg.insert(u);
        gg.insert(v);
        g[u].push_back(v);
        g[v].push_back(u);
    }
    
    vector<int> par(n+1);
    iota(par.begin(), par.end(), 0);
        
    vector<bool> vst(n+1, false);
    
    for (auto &i : gg) {
        if (ok) return 0;
        vst[i] = true;
        dfs(i, par, vst, g);
        vst[i] = false;
    }
    if (!ok) cout<< "IMPOSSIBLE";
}