#include <bits/stdc++.h>
using namespace std;
#define int long long

int findroot(int cur, vector<int> &par) {
    if (cur==par[cur]) return cur;
    return par[cur] = findroot(par[cur], par);
}
int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m,G,S;
    cin>> n>> m>> G>> S;

    vector<pair<int, pair<pair<int,int>, pair<int,int>>>> aa;
    for (int i=0; i<m; i++) {
        int u,v,g,s;
        cin>> u>> v>> g>> s;

        if (u==v) continue;

        aa.push_back({g*G+s*S, {{u,v},{g,s}}});
    }

    sort(aa.begin(), aa.end());
    vector<int> par(n+1);
    iota(par.begin(), par.end(), 0);
    vector<bool> check(n+1, false);

    int checknum=0;
    int mxg=0, mxs=0;
    for (int i=0; i<aa.size(); i++) {
        int u=aa[i].second.first.first, v=aa[i].second.first.second;
        int g=aa[i].second.second.first, s=aa[i].second.second.second;
        if (!check[u]) {
            checknum ++;
            check[u] = true;
        }
        if (!check[v]) {
            checknum++;
            check[v] = true;
        }
        int a=findroot(u, par);
        int b=findroot(v, par);
        if (a != b) {
            par[a] = b;
            mxg=max(mxg, g);
            mxs=max(mxs, s);
        }
    }
    cout<< (checknum == n ? mxg*G + mxs*S : -1);
}