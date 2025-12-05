#include <bits/stdc++.h>
using namespace std;

int n,m;
set<int> st;
vector<int> ans;
bool fnd = false;

void dfs(int cur, int cnt, vector<bool> &vst, vector<vector<pair<int,int>>> &g) {
    for (auto &x : g[cur]) {
        int v=x.first, numpath=x.second;
        if (vst[numpath]) continue;

        if (cnt+1 == m) {
            fnd=true;
            ans.push_back(v);
            return;
        }

        vst[numpath] = true;
        ans.push_back(v);

        dfs(v, cnt+1,vst, g);
        
        if (fnd) return;
        ans.pop_back();
        vst[numpath] = false; 
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin>> m;
    n=122;

    vector<int> degree(n+1, 0);
    vector<vector<pair<int,int>>> g(n+1);
        
    
    for (int i=0; i<m; i++) {
        string s;
        cin>> s;
        char u=s[0],v=s[1];
        st.insert(u);
        st.insert(v);
        degree[u]++;
        degree[v]++;
        g[u].push_back({v, i});
        g[v].push_back({u, i});
    }

    vector<bool> vst(m, false);
    int first;
    for (auto &x : st) {
        if (degree[x] % 2) {
            first=x;
            break;
        }
        first=x;
    }
    ans.push_back(first);
    dfs(first, 0, vst, g);
    if (fnd) for (auto &x : ans) cout<< char(x)<< ' ';
}