#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class FenwickTree {
    int size;
    vector<int> tree;

public:
    FenwickTree(int n) : size(n), tree(n + 1, 0) {}

    void reset(int n) {
        size = n;
        tree.assign(n + 1, 0);
    }

    void update(int i) {
        while (i <= size) {
            tree[i]++;
            i += i & -i;
        }
    }

    int query(int i) const {
        int sum = 0;
        while (i > 0) {
            sum += tree[i];
            i -= i & -i;
        }
        return sum;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCases;
    cin >> testCases;

    while (testCases--) {
        int n;
        cin >> n;

        vector<int> perm(n + 1);
        for (int i = 1; i <= n; ++i)
            cin >> perm[i];

        vector<int> invRight(n + 1), greaterLeft(n + 1);
        FenwickTree ft(n);

        int baseInversions = 0;
        ft.reset(n);
        for (int i = n; i >= 1; --i) {
            invRight[i] = ft.query(perm[i] - 1);
            baseInversions += invRight[i];
            ft.update(perm[i]);
        }

        ft.reset(n);
        for (int i = 1; i <= n; ++i) {
            greaterLeft[i] = (i - 1) - ft.query(perm[i]);
            ft.update(perm[i]);
        }

        int negativeSum = 0;
        for (int i = 1; i <= n; ++i) {
            int delta = (n - i) - invRight[i] - greaterLeft[i];
            if (delta < 0)
                negativeSum += delta;
        }

        int totalInversions = baseInversions + negativeSum;
        cout << totalInversions << '\n';
    }

    return 0;
}
