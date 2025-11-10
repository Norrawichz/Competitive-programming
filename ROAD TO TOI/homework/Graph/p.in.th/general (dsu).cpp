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

    vector<int> val(n+1);
    vector<int> par(n+1);
    for (int i=1; i<=n; i++) par[i] = i;

    for (int i=1; i<=n; i++) cin>> val[i];
    for (int i=0; i<m; i++) {
        int a,b;
        cin>> a>> b;

        int pa=findroot(a, par);
        int pb=findroot(b, par);

        int ans=-1;
        if (pa != pb) {
            if (val[pa] == val[pb]) {
                int mn=min(pa,pb);
                int mx=max(pa,pb);
                ans=mn;
                val[mn] += val[mx]/2;
                par[mx] = mn;
            }
            else if (val[pa] < val[pb]) {
                ans=pb;
                val[pb] += val[pa]/2;
                par[pa] = pb;
            }
            else if (val[pa] > val[pb]) {
                ans=pa;
                val[pa] += val[pb]/2;
                par[pb] = pa;
            }
        }
        cout<< ans<< '\n';;
    }
}