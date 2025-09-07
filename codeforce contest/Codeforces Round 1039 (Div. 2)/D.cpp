#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {
    cin.tie(0)->sync_with_stdio(0);
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++) cin >> p[i];
        vector<ll> dp(n + 1);
        dp[n - 1] = 1;
        for (int i = n - 2; i > -1; i--) {
            if (p[i] > p[i + 1])
                dp[i] = dp[i + 1] + n - i;
            else
                dp[i] = dp[i + 2] + n - i;
        }
        for (int x : dp) {
            cout<< x << " ";
        }
        cout<< endl;
        cout << accumulate(dp.begin(), dp.end(), 0ll) << '\n';
    }
    return 0;
}
