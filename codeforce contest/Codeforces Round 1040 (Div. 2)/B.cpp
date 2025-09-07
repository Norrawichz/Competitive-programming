#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, s;
        cin >> n >> s;

        vector<int> a(n);
        unordered_map<int, int> freq;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            freq[a[i]]++;
        }

        int total = accumulate(a.begin(), a.end(), 0LL);
        int target = s - total;

        if (target < 0 || target == 1) {
            bool first = true;
            for (int i = 0; i < freq[0]; ++i) {
                if (!first) cout << ' ';
                cout << 0;
                first = false;
            }
            for (int i = 0; i < freq[2]; ++i) {
                if (!first) cout << ' ';
                cout << 2;
                first = false;
            }
            for (int i = 0; i < freq[1]; ++i) {
                if (!first) cout << ' ';
                cout << 1;
                first = false;
            }
            cout << '\n';
        } else {
            cout << -1 << '\n';
        }
    }

    return 0;
}
