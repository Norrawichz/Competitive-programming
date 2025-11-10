#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9+7;

int findminkey(vector<int> &key, vector<bool> &mstset) {
    int mn=INF, id;
    for (int i=0; i<key.size(); i++) {
        if (key[i] < mn && !mstset[i]) {
            id=i;
            mn=key[i];
        }
    }
    return id;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    cin>> n>> m;

    vector<int> key(n+1, INF);
    vector<bool> mstset(n+1, false);
    vector<int> par(n+1);
    iota(par.begin(), par.end(), 0);
    vector<vector<int>> g(n+1, vector<int>(n+1, INF));
    for (int i=0; i<m; i++) {
        int u,v,w;
        cin>> u>> v>> w;
        g[u][v] = w;
        g[v][u] = w;
    }

    key[1] = 0;
    int cost = 0;
    for (int i=0; i<n; i++) {
        int mnkey=findminkey(key, mstset);

        mstset[mnkey] = true;
        cost+=key[mnkey];

        for (int j=1; j<=n; j++) {
            if (key[j] > g[mnkey][j] && !mstset[j]) {
                key[j] = g[mnkey][j];
                par[j] = mnkey;
            }
        }
    }
    for (int i=1; i<=n; i++) cout<< par[i]<< ' ';
    cout<< cost;
}