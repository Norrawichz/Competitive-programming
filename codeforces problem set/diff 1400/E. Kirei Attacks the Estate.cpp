#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<vector<int>> gr;
vector<int> arr, res;

void solve(int v, int p, int mini, int maxi) {
    res[v] = max(arr[v], arr[v] - mini);
    mini = min(arr[v], arr[v] - maxi);
    for (int u : gr[v]) {
        if (u == p) continue;
        solve(u, v, mini, res[v]);
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        arr.resize(n + 1);
        gr.assign(n + 1, vector<int>());
        res.resize(n + 1);

        for (int i = 1; i <= n; ++i) {
            cin >> arr[i];
        }

        for (int i = 0; i < n - 1; ++i) {
            int v, u;
            cin >> v >> u;
            gr[v].push_back(u);
            gr[u].push_back(v);
        }

        solve(1, -1, 0, 0);

        for (int i = 1; i <= n; ++i) {
            cout << res[i] << " ";
        }
        cout << '\n';
    }

    return 0;
}
