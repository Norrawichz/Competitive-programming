#include <bits/stdc++.h>
using namespace std;

const long long INF = 4e18;

class SegmentTree {
    int n;
    vector<long long> tree;

public:
    SegmentTree(int size) : n(size), tree(4 * size + 4, INF) {}

    void update(int node, int l, int r, int pos, long long val) {
        if (l == r) {
            tree[node] = val;
            return;
        }
        int mid = (l + r) / 2;
        if (pos <= mid)
            update(node * 2, l, mid, pos, val);
        else
            update(node * 2 + 1, mid + 1, r, pos, val);
        tree[node] = min(tree[node * 2], tree[node * 2 + 1]);
    }

    long long query(int node, int l, int r, int ql, int qr) {
        if (ql > qr) return INF;
        if (ql <= l && r <= qr) return tree[node];
        int mid = (l + r) / 2;
        long long res = INF;
        if (ql <= mid)
            res = min(res, query(node * 2, l, mid, ql, qr));
        if (qr > mid)
            res = min(res, query(node * 2 + 1, mid + 1, r, ql, qr));
        return res;
    }
};

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> b(n + 1);
        for (int i = 1; i <= n; ++i)
            cin >> b[i];

        SegmentTree seg(n);
        vector<bool> isAlive(n + 1, true);

        for (int i = 1; i <= n; ++i)
            seg.update(1, 1, n, i, b[i]);

        priority_queue<int> pq;
        for (int i = 1; i <= n; ++i)
            pq.push(i);

        bool valid = true;

        while (!pq.empty()) {
            int i = pq.top();
            pq.pop();

            if (!isAlive[i]) continue;

            long long current = b[i];
            long long prevMin = (i > 1) ? seg.query(1, 1, n, 1, i - 1) : INF;

            if (i > 1 && prevMin * 2 <= current) {
                valid = false;
                break;
            }

            long long subtract = (i > 1) ? min(prevMin, current) : current;
            current -= subtract;

            if (current > 0) {
                b[i] = current;
                seg.update(1, 1, n, i, current);
                pq.push(i);
            } else {
                isAlive[i] = false;
                seg.update(1, 1, n, i, INF);
            }
        }

        cout << (valid ? "YES\n" : "NO\n");
    }

    return 0;
}
