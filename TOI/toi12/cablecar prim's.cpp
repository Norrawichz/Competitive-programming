#include <bits/stdc++.h>
using namespace std;
#define int long long

int n,m, st, e, p;

int findmxk(vector<int> &key, vector<bool> &mstset) {
    int mx=-1, id;
    for (int i=1; i<=n; i++) {
        if (key[i] > mx && !mstset[i]) {
            mx=key[i];
            id=i;
        }
    }
    return id;
}

int dfs(int cur, int mn, vector<int> &par, vector<vector<int>> &g) {
    if (cur == st) return mn; 

    return dfs(par[cur], min(mn, g[par[cur]][cur]), par, g);
}
int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
 
    cin>> n>> m;

    vector<vector<int>> g(n+1, vector<int>(n+1, -1));
    for (int i=0; i<m; i++) {
        int u,v,w;
        cin>> u>> v>> w;
        g[u][v] = w;
        g[v][u] = w;
    }

    
    cin>> st>> e>> p;

    vector<int> par(n+1);
    vector<int> key(n+1, -1);
    vector<bool> mstset(n+1, false);
    iota(par.begin(), par.end(), 0);

    key[st]=0;

    vector<vector<pair<int,int>>> g2(n+1);
    for (int i=0; i<n; i++) {
        int mxk=findmxk(key, mstset);

        mstset[mxk] = true;
        for (int j=1; j<=n; j++) {
            if (key[j] < g[mxk][j] && !mstset[j]) {
                key[j] = g[mxk][j];
                par[j] = mxk;
            }
        }
    }

    int mx = dfs(e, LLONG_MAX, par, g);
    cout<< (p+mx-2)/(mx-1);
}