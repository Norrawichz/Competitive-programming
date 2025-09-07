#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<pair<pair<int,int>, int>> arr;

        for (int i = 0; i < n; i++) {
            int a, b, c;
            cin >> a >> b >> c;
            arr.push_back({{a, b}, c});
        }
        sort(arr.begin(), arr.end());
        for (auto x : arr) {
            if (x.first.first <= k && x.first.second >= k && x.second > k) {
                k = x.second;
            }
        }
        cout << k << endl;
    }
    return 0;
}