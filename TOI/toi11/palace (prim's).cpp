#include <bits/stdc++.h>
using namespace std;
#define int long long

int findmxkey(vector<int> &key, vector<bool> &mstset) {
    int mx=-1, id;
    for (int i=1; i<key.size(); i++) {
        if (key[i] > mx && !mstset[i]) {
            id=i;
            mx=key[i];
        }
    }
    return id;
}
int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    cin>> n>> m;

    vector<vector<int>> g(n+1, vector<int> (n+1, -1));
    for (int i=0; i<m; i++) {
        int u,v,w;
        cin>> u>> v>> w;
        g[u][v] = max(g[u][v],w);
        g[v][u] = max(g[v][u],w);
    }

    vector<int> key(n+1, -1);
    vector<bool> mstset(n+1, false);
    
    int cost=0;
    key[1] = 0;
    
    for (int i=0; i<n; i++) {
        int mxk = findmxkey(key, mstset);
        mstset[mxk] = true;
        if (i!=0) cost+=key[mxk]-1;

        for (int j=1; j<=n; j++) {
            if (key[j] < g[mxk][j]) {
                key[j] = g[mxk][j];
            }
        }
        
    }
    cout<< cost;
}