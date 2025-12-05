#include <bits/stdc++.h>
using namespace std;

bool found = false;
float total = 0;

void findpar(int cur, vector<vector<pair<int,int>>> &g, vector<int> &par) {
    if (cur == 'X') return;
    findpar(par[cur], g, par);

    float ans=0;
    vector<float> cost;
    for (auto &x : g[par[cur]]) {
        if (x.first == cur) cost.push_back(x.second);
    }
    sort(cost.begin(), cost.end());

    int ss=cost.size();
    
    if (ss == 1) ans+=cost[0];
    else if (ss % 2 == 0) ans += (cost[ss/2]+cost[ss/2 - 1])/2.0;
    else ans = cost[ss/2];
    total += ans;
    cout<< char(par[cur])<< ' '<<char(cur)<< ' '<<fixed<< setprecision(1)<<ans<< '\n';
}

void dfs(int cur, vector<vector<pair<int,int>>> &g, vector<int> &par, vector<bool> &vst) {
    if (cur == 'Y') {
        found = true;
        findpar(cur, g, par);
        cout<< total;
        return;
    }   
    for (auto &x : g[cur]) {
        int v=x.first;
        if (par[cur] == v || vst[v]) continue;

        vst[v] = true;
        par[v] = cur;
        dfs(v, g, par,vst); 
        if (found) return;
        vst[v] = false;
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;

    vector<vector<pair<int,int>>> g(125);
    for (int i=0; i<n; i++) {
        char a, b;
        int w;

        cin>> a>> b>> w;

        g[a].push_back({b,w});
        g[b].push_back({a,w});
    }

    vector<bool> vst(125, false);
    vector<int> par(125);
    iota(par.begin(), par.end(), 0);

    vst['X'] = true;
    dfs('X', g, par, vst);

    if (!found) cout<< "broken";
    
}