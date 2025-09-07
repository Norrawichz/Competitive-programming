#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int m, n;
    cin>> m>> n;
    int graph[m][n];
    for (int i = 0; i<m; i++) {
        for (int j = 0; j<n; j++) {
            cin>> graph[i][j];
        }
    }
    int dp[m][n];
    for (int i = 0; i<m; i++) {
        for (int j = 0; j<n; j++) {
            if (i == 0) dp[i][j] = graph[i][j];
            else {
                if (j - 1 >= 0 && j + 1 < n) {
                    dp[i][j] = graph[i][j] + max({dp[i-1][j], dp[i-1][j-1], dp[i-1][j+1]});
                }
                else if (j - 1 < 0 && j + 1 < n) {
                    dp[i][j] = graph[i][j] + max(dp[i-1][j], dp[i-1][j+1]);
                }
                else if (j - 1 >= 0 && j + 1 >= n) {
                    dp[i][j] = graph[i][j] + max(dp[i-1][j], dp[i-1][j-1]);
                }
            }
        }
    }
    int mx = 0;
    for (int j = 0; j<n; j++) {
        mx = max(mx, dp[m-1][j]);
    }
    cout<< mx;
    return 0;
}