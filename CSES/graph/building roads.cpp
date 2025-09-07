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

    vector<int> dist(n+1, 0);
    queue<int> q;
    for (int i=1; i<=n; i++) {
        if (dist[i] != 0) continue;
        q.push(i);
        dist[i] = i;
        while (!q.empty()) {
            int cur = q.front();
            q.pop();
            for (auto x : g[cur]) {
                if (dist[x] == 0) {
                    q.push(x);
                    dist[x] = i;
                }
            }
        }
    }
    vector<bool> vst(n+1, 0);
    vst[1] = 1;
    int count = 0;
    vector<int> ans;
    for (int i=2; i<=n;i++) {
        if (!vst[dist[i]]) {
            vst[dist[i]] = 1;
            ans.push_back(i);
            count++;
        }
    }
    cout<< count<< endl;
    for (auto x : ans) {
        cout<< 1<< " "<< x<< endl;
    }
}