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
    
    vector<pair<int,pair<int,int>>> g;
    for (int i=0; i<m; i++) {
        int u,v,w;
        cin>> u>> v>> w;
        g.push_back({w,{u,v}});
    }
    sort(g.begin(), g.end());

    vector<int> par(n+1);
    for (int i=1; i<=n; i++) par[i] = i;

    long long cost=0;
    for (auto x : g) {
        int w=x.first;
        int u=x.second.first;
        int v=x.second.second;

        int a=findroot(u, par);
        int b=findroot(v, par);
        if (a!=b) {
            cost+=w;
            par[a] = b;
        }
    }


    set<int> tem;
    for (int i=1; i<=n; i++) {
        int f=findroot(i, par);
        tem.insert(f);
    }
    if (tem.size() > 1) cout<< "IMPOSSIBLE";
    else cout<< cost;
}