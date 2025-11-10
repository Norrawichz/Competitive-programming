#include <bits/stdc++.h>
using namespace std;
#define int long long

int n,m, st,e,p;

int findroot(int cur, vector<int> &par) {
    if (par[cur] == cur) return cur;

    return par[cur] = findroot(par[cur], par);
}

int dfs(int cur, int mn, vector<vector<pair<int,int>>> &ug, vector<bool> &vst) {
    if (cur == e) return mn; 

    int mnn=LLONG_MAX;
    for (auto &x : ug[cur]) {
        int v=x.first, w=x.second;
        if (vst[v]) continue;

        vst[v] = true;
        int d=dfs(v, min(mn, w), ug, vst);
        if (d < mnn) mnn=d;
        vst[v] = false;
    }
    return mnn;

}
int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    cin>> n>> m;

    vector<pair<int, pair<int,int>>> g;
    for (int i=0; i<m; i++) {
        int u,v,w;
        cin>> u>> v>> w;
        g.push_back({w, {u,v}});
    }
    cin>> st>> e>> p;
    
    vector<int> par(n+1);
    iota(par.begin(), par.end(), 0);

    vector<vector<pair<int,int>>> ug(n+1);
    sort(g.rbegin(), g.rend());
    for (auto x : g) {
        int w=x.first;
        int u=x.second.first;
        int v=x.second.second;

        int a=findroot(u, par);
        int b=findroot(v, par);
        if (a != b) {
            ug[u].push_back({v, w});
            ug[v].push_back({u, w});
            par[a] = b;
        }
    }
    
    vector<bool> vst(n+1, false);
    vst[st] = 1;
    int ans = dfs(st, LLONG_MAX, ug, vst);
    cout<< (p+ans-2)/(ans-1);
}