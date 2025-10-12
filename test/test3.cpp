#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, m; 
    if (!(cin >> n >> m)) return 0;

    vector<long long> ans;
    for (long long p = 2; p * p <= m; ++p) {
        if (m % p == 0) {
            ans.push_back(p - 1);
            while (m % p == 0) m /= p;
        }
    }
    if (m > 1) ans.push_back(m - 1); // m เหลือเป็นจำนวนเฉพาะตัวสุดท้าย

    sort(ans.begin(), ans.end());
    for (int i = 0; i < (int)ans.size(); ++i) {
        if (i) cout << ' ';
        cout << ans[i];
    }
    cout << '\n';
    return 0;
}
