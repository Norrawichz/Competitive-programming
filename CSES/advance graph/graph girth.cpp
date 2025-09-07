#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int n, m;
    cin>> n>> m;
    vector<vector<int>> g(n+1);
    for (int i=0; i<m; i++) {
        int u, v;
        cin>> u>> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    int girth = INT_MAX;
    
    for (int i=1; i<=n; i++) {
        vector<int> parent(n+1, -1);
        vector<int> dist(n+1, -1);
        queue<int> q;

        q.push(i);
        dist[i] = 0;
        while (!q.empty()) {
            int cur = q.front();
            q.pop();
            for (auto x : g[cur]) {
                if (dist[x] == -1) {
                    dist[x] = dist[cur] + 1;
                    parent[x] = cur;
                    q.push(x);
                }
                else if (parent[cur] != x) {
                    girth = min(girth, dist[x] + dist[cur] + 1);
                }
            }
        }
    }
    if (girth == INT_MAX) cout << -1 << '\n';
    else cout << girth << '\n';
    
    return 0;
}