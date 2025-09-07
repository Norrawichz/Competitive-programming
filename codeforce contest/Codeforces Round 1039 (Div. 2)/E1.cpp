#include <bits/stdc++.h>
using namespace std;

bool is_possible(int v, const vector<int>& a, int k, int& l_out, int& r_out) {
    int n = a.size();
    vector<int> b(n);
    for (int i = 0; i < n; ++i) {
        b[i] = (a[i] > v) ? 1 : -1;
    }

    vector<long long> pref(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        pref[i + 1] = pref[i] + b[i];
    }

    long long min_pref = 0;
    int min_pos = 0;

    for (int r = k; r <= n; ++r) {
        if (pref[r] - min_pref >= 1) {
             l_out = min_pos + 1;
             r_out = r;
            return true;
        }
        if (pref[r - k] < min_pref) {
            min_pref = pref[r - k];
             min_pos = r - k;
        }
    }   

    return false;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int& x : a) cin >> x;

        int low = 1, high = n;
        int ans_v = 1, ans_l = 1, ans_r = k;

        while (low <= high) {
            int mid = (low + high) / 2;
            int l, r;
            if (is_possible(mid, a, k, l, r)) {
                ans_v = mid;
                ans_l = l;
                ans_r = r;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        cout << ans_v << " " << ans_l << " " << ans_r << "\n";
    }

    return 0;
}
