#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int m, n;
    cin>> m>> n;
    vector<vector<long long>> dp(m+1, vector<long long>(n+1, 0));
    for (int i = 1; i<=m; i++) {
        for (int j = 1; j<=n; j++) {
            if (i == 1 && j == 1) dp[i][j] = 1;
            else dp[i][j] = (dp[i][j-1] + dp[i-1][j]) % 1000000007;
        }
    }
    cout<< dp[m][n];
    return 0;
}