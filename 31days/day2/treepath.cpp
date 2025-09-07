#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100005;
vector<int> tree[MAXN];
int val[MAXN];

void dfs(int node, int parent) {
    for (int child : tree[node]) {
        if (child != parent) {
            val[child] += val[node];
            dfs(child, node);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    for (int i = 0; i < n - 1; ++i) {
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    while (q--) {
        int u, v, w;
        cin >> u >> v >> w;
        val[u] += w;
        val[v] += w;
    }

    dfs(1, 0);

    for (int i = 1; i <= n; ++i) {
        cout << val[i] << '\n';
    }

    return 0;
}
