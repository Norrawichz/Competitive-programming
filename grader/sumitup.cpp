#include <bits/stdc++.h>
using namespace std;

int ans = 0, k, n;

void bt(vector<int> &nums, int start, int sum) {
    if (sum == k) {
        ans++;
        return;
    }
    if (sum > k) return;

    for (int i = start; i < n; i++) {
        bt(nums, i + 1, sum + nums[i]);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> k >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    bt(nums, 0, 0);
    cout << ans << '\n';
    return 0;
}
