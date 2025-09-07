#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin>> n>> m;
    vector<long long> dp(n+1, 0);
    dp[0] = 1;
    long long sum = 1;
    for (int i = 1; i<=n; i++) {
        dp[i] = sum;
        if (i - m >= 0) {
            sum = (sum - dp[i-m] + 1000000007) % 1000000007;
        }
        sum = (sum + dp[i]) % 1000000007;
    }
    cout<< dp[n];
    return 0;
}