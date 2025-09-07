#include <bits/stdc++.h>
using namespace std;

const int MAXN = 6005;

struct DSU {
    vector<int> par;
    DSU(int n) { par.resize(n); iota(par.begin(), par.end(), 0); }
    int find(int x) {
        if (par[x] == x) return x;
        return par[x] = find(par[x]);
    }
    bool unite(int x, int y) {
        int rx = find(x), ry = find(y);
        if (rx == ry) return false;
        par[rx] = ry;
        return true;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> seg(n);
        for (int i = 0; i < n; ++i)
            cin >> seg[i].first >> seg[i].second;

        DSU dsu(2 * n + 5);
        vector<int> selected;
        for (int i = 0; i < n; ++i) {
            int u = seg[i].first, v = seg[i].second;
            if (dsu.unite(u, v)) {
                selected.push_back(i + 1);
            }
        }

        cout << selected.size() << '\n';
        for (int idx : selected) cout << idx << ' ';
        cout << '\n';
    }

    return 0;
}
