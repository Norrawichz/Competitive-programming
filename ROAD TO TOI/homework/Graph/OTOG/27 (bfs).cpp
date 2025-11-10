#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int m,s,i;
    cin>> m>> s>> i;

    vector<vector<int>> g(1000);
    for (int i=0; i<m; i++) {
        int u,v;
        cin>> u>> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    queue<int> q;
    vector<int> dist(1000, -1);

    dist[s] = 0;
    q.push(s);
    while (!q.empty()) {
        int cur=q.front(); q.pop();

        for (auto x : g[cur]) {
            if (dist[x] != -1) continue;
            dist[x] = dist[cur]+1;
            q.push(x);
        }
    }
    cout<< dist[i];
}