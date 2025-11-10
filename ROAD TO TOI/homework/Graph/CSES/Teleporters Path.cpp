#include <bits/stdc++.h>
using namespace std;

vector<int> ans;
int n,m;
bool ok=0;

void dfs(int cur, int cnt, vector<vector<int>> &g) {
    if (cnt == m && cur == n) {
        ok=1;
        return;
    }
    if (cnt >= m) return;

    for (auto &x : g[cur]) {

    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin>> n>> m;

    vector<vector<int>> g(n+1);
    for (int i=0; i<m; i++) {
        int u,v;
        cin>> u>> v;

        g[u].push_back(v);
    }

    

}