#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>> n;
    int dp[n+1] = {};
    dp[0] = 1;
    int mod = 1000000007;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=6; j++) {
            if (i - j >= 0) {
                dp[i] = (dp[i] + dp[i-j]) % mod;
            }
        }
    }
    cout<< dp[n];
}