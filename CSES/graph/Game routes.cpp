#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int n,m;
    cin>> n>> m;

    vector<vector<int>> g(n+1);
    vector<int> indg(n+1,0);
    for (int i=0; i<m; i++) {
        int u,v;
        cin>> u>> v;
        g[u].push_back(v);
        indg[v]++;
    }

    queue<int> q;
    vector<int> topo;
    for (int i=0; i<n; i++) {
        if (indg[i] == 0) q.push(i);
    }

    while (!q.empty()) {
        int cur=q.front(); q.pop();
        topo.push_back(cur);
        for (auto x : g[cur]) {
            if (--indg[x] == 0) {
                q.push(x);
            }
        }
    }

    vector<long long> dp(n+1, 0);
    dp[1] = 1;
    for (auto u : topo) {
        for (auto v : g[u]) {
            dp[v] = (dp[v]+dp[u]) % MOD;
        }
    }
    cout<< dp[n];

}