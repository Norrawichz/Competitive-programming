#include <bits/stdc++.h>
using namespace std;

int findroot(int cur, vector<int> &par) {
    if (par[cur] == cur) return cur;

    return par[cur] = findroot(par[cur], par);
}
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m,k;
    cin>> n>> m>> k;

    vector<pair<int,pair<int,int>>> g;
    for (int i=0; i<m; i++) {
        int u,v,w;
        cin>> u>> v>> w;
        g.push_back({w, {u,v}});
    }

    vector<int> par(n);
    iota(par.begin(), par.end(), 0);
    priority_queue<int, vector<int>, less<int>> pq;
    int cnt=0;
    sort(g.begin(), g.end());
    for (auto &x : g) {
        int w=x.first, u=x.second.first, v=x.second.second;

        int a=findroot(u, par);
        int b=findroot(v, par);
        if (a != b) {
            cnt++;
            pq.push(w);
            par[a] = b;
        }
        if (cnt == n-1) break;
    }
    while (k--) {
        int x=pq.top();
        pq.push(x/2);
        pq.pop();
    }
    int ans=0;
    while (!pq.empty()) {
        ans+=pq.top();
        pq.pop();
    }
    cout<< ans;

}