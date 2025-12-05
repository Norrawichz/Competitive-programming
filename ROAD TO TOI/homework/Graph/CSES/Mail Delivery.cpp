#include <bits/stdc++.h>
using namespace std;

int n,m;
vector<int> ans;
unordered_map<int,bool> rd;
bool fnd = false;

void dfs(int cur, int cnt, int road1, vector<bool> &vst, vector<vector<pair<int,int>>> &g) {
    for (auto &x : g[cur]) {
        int v=x.first, numpath=x.second;
        if (vst[numpath]) continue;

        if (cnt+1 == m && v == 1) {
            fnd=true;
            ans.push_back(1);
            return;
        }
        if (rd[numpath] && road1+1 == rd.size()) {
            
            for (auto &x : ans) cout<< x<< ' ';
            cout<< '\n';
            continue; 
        }

        vst[numpath] = true;
        ans.push_back(v);

        dfs(v, cnt+1, (rd[numpath] ? road1+1 : road1),vst, g);
        
        if (fnd) return;
        ans.pop_back();
        vst[numpath] = false; 
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin>> n>> m;

    vector<vector<pair<int,int>>> g(n+1);
        
    for (int i=0; i<m; i++) {
        int u,v;
        cin>> u>> v;
        if (u==1 || v==1) {
            rd[i] = true;
        }
        g[u].push_back({v, i});
        g[v].push_back({u, i});
    }

    vector<bool> vst(m, false);
    ans.push_back(1);
    dfs(1, 0,0, vst, g);

    if (fnd) for (auto &x : ans) cout<< x<< ' ';
    else cout<< "IMPOSSIBLE";
}