#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin>> n>> m;

    vector<vector<int>> g(n+1);
    for (int i=0; i<m; i++) {
        int u, v;
        cin>> u>> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    vector<int> team(n+1, 0);
    queue<int> q;
    
    for (int i=1; i<=n; i++) {
        if (team[i] != 0) continue;
        team[i] = 1;
        q.push(i);
        while (!q.empty()) {
            int cur = q.front();
            q.pop();
            for (auto x : g[cur]) {
                if (team[x] == 0) {
                    team[x] = 3 - team[cur];
                    q.push(x);
                }
                else if (team[x] == team[cur]) {
                    cout<< "IMPOSSIBLE";
                    return 0;
                }
            }
        }
    }
    for (int i=1; i<=n; i++) {
        cout<< team[i] << " ";
    }
}