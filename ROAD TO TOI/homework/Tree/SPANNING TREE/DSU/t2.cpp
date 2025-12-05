#include <bits/stdc++.h>
using namespace std;

int findroot(int cur, vector<int> &par) {
    if (par[cur] == cur) return cur;

    return par[cur] = findroot(par[cur], par);
}
int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m;
    cin>> n>> m;

    vector<int> par(n);
    iota(par.begin(), par.end(), 0);

    for (int i=0; i<m; i++) {
        int u,v;
        cin>> u>> v;
        
        int a=findroot(u, par);
        int b=findroot(v, par);
        if (a != b) par[a] = b;
    }

    for (auto &x : par) cout<< x<< ' ';
}