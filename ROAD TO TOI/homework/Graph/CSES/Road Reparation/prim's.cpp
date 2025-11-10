#include <bits/stdc++.h>
using namespace std;
#define int long long

int findmnk(vector<int> &key, vector<bool> &mstset) {
    int mn=LLONG_MAX, id = -1;
    for (int i=1; i<key.size(); i++) {
        if (key[i] < mn && !mstset[i]) {
            mn=key[i];
            id=i;
        }
    }
    return id;
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    cin>> n>> m;

    vector<vector<int>> g(n+1, vector<int>(n+1, LLONG_MAX));
    for (int i=0; i<m; i++) {
        int u,v,w;
        cin>> u>> v>> w;
        g[u][v] = min(g[u][v], w);
        g[v][u] = min(g[v][u], w);
    }

    vector<int> key(n+1, LLONG_MAX);
    vector<bool> mstset(n+1, false);

    key[1] = 0;
    int cost=0;
    for (int i=0; i<n; i++) {
        int mnk=findmnk(key, mstset);
        if (mnk == -1) {
            cout<< "IMPOSSIBLE";
            return 0;
        }
        mstset[mnk] = true;
        cost += key[mnk];
        for (int j=1; j<=n; j++) {
            if (key[j] > g[mnk][j]) key[j] = g[mnk][j];
        }
    }
    cout<< cost;
}