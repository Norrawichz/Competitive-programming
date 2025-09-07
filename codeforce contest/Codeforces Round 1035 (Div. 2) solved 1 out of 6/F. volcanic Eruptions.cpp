#include <bits/stdc++.h>
using namespace std;

int t;
vector<vector<int>> g;
vector<int> w, dist;

int dfs(int prv,int cur, int s) {
    for (auto x : g[cur]) {
        if (w[x] == -1) {
            
        }
        else {

        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>> t;
    while (t--) {
        int n, st;
        cin>> n>> st;
        w.resize(n);
        for (int i=0; i<n; i++) cin>> w[i];
        g.resize(n+1);
        for (int i=1; i<=n-1; i++) {
            int u,v;
            cin>> u>> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        dist.resize(n+1, 0);
        queue<int> q;
        q.push(st);
        while (!q.empty()) {
            int cur=q.front();
            q.pop();
            for (auto x : g[cur]) {
                if (dist[x] != 0) continue;
                dist[x] = dist[cur] + 1;
                q.push(x);
            }
        }
        dfs(st, st, 2);
        // node to the root < t || s == 0 ends
        // find max moves until you die
        // choose -1 if and only if you can comeback and not die

    }
}