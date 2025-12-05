#include <bits/stdc++.h>
using namespace std;

int findroot(int cur, vector<int> &par) {
    if (par[cur] == cur) return cur;

    return par[cur] = findroot(par[cur], par);
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n,m;
    cin>> n>> m;

    vector<pair<int, pair<int,int>>> g;
    for (int i=0; i<m; i++) {
        int u,v,w;
        cin>> u>> v>> w;
        g.push_back({w, {u,v}});
    }

    vector<int> par(n+1);
    iota(par.begin(), par.end(), 0);
    sort(g.rbegin(), g.rend());

    int sm=0;
    for (int i=0; i<m; i++) {
        int w=g[i].first;
        int u=g[i].second.first;
        int v=g[i].second.second;

        int a=findroot(u, par);
        int b=findroot(v, par);
        if (a != b) {
            par[a] = b;
            sm+=w;
        }
    }
    for (int i=1; i<=n; i++) cout<< par[i]<< ' ';
    cout<< sm;
}