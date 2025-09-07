#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, t;
    cin >> n >> t;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int l = 0, r = 0, sum = 0, ans = 0;
    while (r < n) {
        sum += a[r];
        while (sum > t) {
            sum -= a[l];
            l++;
        }
        ans = max(ans, r - l + 1);
        r++;
    }
    cout << ans;
}
