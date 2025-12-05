#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m,k;
    cin>> n>> m>> k;
    int pro[n+1];
    for (int i=1; i<=n; i++) cin>> pro[i];

    vector<vector<int>> g(n+1);
    for (int i=0; i<m; i++) {
        int u,v;
        cin>> u>> v;

        g[u].push_back(v);
        g[v].push_back(u);
    }

    vector<int> mndist(n+1, -1);
    vector<int> dist(n+1, -1);

    queue<int> q;
    dist[1]=0;
    mndist[pro[1]]=0;
    q.push(1);
    
    while (!q.empty()) {
        int cur=q.front(); q.pop();

        for (auto &x : g[cur]) {
            if (dist[x] != -1) continue;
            dist[x] = dist[cur] + 1;
            mndist[pro[x]] = max(mndist[pro[x]], dist[x]);
            q.push(x);
        }
    }

    for (int i=1; i<=n; i++) if (mndist[i] != -1) cout<< mndist[i]<< ' ';
    cout<< '\n';
}