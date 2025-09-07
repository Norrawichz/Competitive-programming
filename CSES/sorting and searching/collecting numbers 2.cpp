#include <bits/stdc++.h>
using namespace std;

vector<int> pos;
bool is_break (int i) {
    return i > 1 && pos[i] < pos[i-1];
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> arr(n + 1);
    pos.resize(n+1);

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        pos[arr[i]] = i;
    }

    int r = 1;
    for (int i = 2; i <= n; i++) {
        if (is_break(i)) r++;
    }

    while (m--) {
        int a, b;
        cin >> a >> b;
        int u = arr[a], v = arr[b];

        set<int> affected;
        for (int x : {u, u + 1, v, v + 1}) {
            if (x >= 1 && x <= n) affected.insert(x);
        }

        for (int x : affected) r -= is_break(x);

        swap(arr[a], arr[b]);
        swap(pos[u], pos[v]);

        for (int x : affected) r += is_break(x);

        cout << r << '\n';
    }
}
