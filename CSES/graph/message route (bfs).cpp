#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin>> n>> m;

    vector<vector<int>> g(n+1);
    vector<int> parent(n+1, 0);
    for (int i=0; i<m; i++) {
        int u, v;
        cin>> u>> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    vector<int> dist(n+1, 0);
    queue<int> q;
    q.push(1);
    dist[1] = 1;
    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        for (auto x : g[cur]) {
            if (dist[x]!=0) continue;
            dist[x] = dist[cur] + 1;
            parent[x] = cur;
            q.push(x);
        }
    }

    if (dist[n] == 0) cout<< "IMPOSSIBLE";
    else {
        int a = dist[n];
        cout<< a<< endl;
        q.push(n);
        int ans[a], i=a-1;
        while (!q.empty()) {
            int cur = q.front();
            q.pop();
            ans[i] = cur;
            i--;
            if (parent[cur] == 0) break;
            q.push(parent[cur]);
        }
        for (int j=0; j<a; j++) cout<< ans[j]<< " ";
    }
}