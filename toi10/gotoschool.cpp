#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int m, n, d;
    cin>> n>> m>> d;
    long long dp[m+1][n+1] = {};
    bool dog[m+1][n+1] = {};

    for (int i = 0; i<d; i++) {
        int r, c;
        cin>> c>> r;
        dog[m-r][c] = true;
    }
    if (!dog[m-1][1]) dp[m-1][1] = 1;
    for (int i = m-1; i>=0; i--) {
        for (int j = 1; j<=n; j++) {
            if ((i == m-1 && j == 1)||dog[i][j]) continue;
            dp[i][j] = dp[i+1][j] + dp[i][j-1];
        }
    }
    cout<< dp[0][n];
    return 0;
}