#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,k;
    cin>>n>>m>>k;

    queue<pair<int,int>> q;
    vector<int> dist(n+1, INT_MAX);
    int mx = 0;
    for (int i=0; i<k; i++) {
        int s;
        cin>> s;
        mx = max(mx, s);
        q.push({s, s});
        dist[s] = 0;
    }

    vector<vector<int>> g(n+1);
    for (int i=0; i<m; i++) {
        int u, v;
        cin>> u>> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    vector<vector<bool>> vst(mx + 1, vector<bool>(n+1, false)); 
    while (!q.empty()) {
        int node=q.front().first, p=q.front().second;
        q.pop();
        if (vst[p][node]) continue;
        vst[p][node] = true;
        
        for (auto v : g[node]) {
            if (dist[node] + 1 < dist[v] && dist[v] != 0) {
                dist[v] = dist[node] + 1;
                q.push({v, p});
            }
        }
    }
    for (int i=1; i<=n+1; i++) {
        if (dist[i] == 0) {
            int mn = INT_MAX;
            for (auto x : g[i]) {
                if (dist[x] < mn) mn = dist[x];
            }
            dist[i] = mn+1;
        }
    }
    for (int i=1; i<=n; i++) {
        cout<< (dist[i] == INT_MAX || dist[i] == 0 ? -1 : dist[i])<< " ";
    }
}