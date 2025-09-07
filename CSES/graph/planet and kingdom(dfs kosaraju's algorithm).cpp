#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<int> g[N], rg[N];
vector<bool> visited(N);
vector<int> order, scc(N);
int n, m, comp_id = 0;

void dfs1(int u) {
    visited[u] = true;
    for (int v : g[u]) {
        if (!visited[v])
            dfs1(v);
    }
    order.push_back(u);
}

void dfs2(int u) {
    visited[u] = true;
    scc[u] = comp_id;
    for (int v : rg[u]) {
        if (!visited[v])
            dfs2(v);
    }
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        rg[b].push_back(a);
    }

    for (int i = 1; i <= n; i++) {
        if (!visited[i])
            dfs1(i);
    }

    fill(visited.begin(), visited.end(), false);
    reverse(order.begin(), order.end());

    for (int u : order) {
        if (!visited[u]) {
            comp_id++;
            dfs2(u);
        }
    }

    cout << comp_id << '\n';
    for (int i = 1; i <= n; i++)
        cout << scc[i] << " ";
    cout << '\n';
}
