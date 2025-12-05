#include <bits/stdc++.h>
using namespace std;

int findroot(int cur, vector<int> &par) {
    if (cur==par[cur]) return cur;

    return par[cur] = findroot(par[cur], par);
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    cin>> n>> m;

    vector<pair<int,int>> g(m+1);
    for (int i=0; i<m; i++) {
        int u,v;
        cin>> u>> v;

        g[i]={u,v};
    }

    vector<int> par(n+1);
    iota(par.begin(), par.end(), 0);

    for (int i=0; i<m; i++) {
        int u=g[i].first;
        int v=g[i].second;

        int a=findroot(u,par);
        int b=findroot(v,par);
        if (a != b) {
            par[a] = b;
        }
    }

    set<int> ans;
    for (int i=1; i<=n; i++) ans.insert(findroot(i, par));

    cout<< ans.size()-1<< '\n';
    int prv=0;
    for (auto &x : ans) {
        if (prv == 0) prv=x;
        else {
            cout<< x<< ' '<< prv<< '\n';
        }
    }
}