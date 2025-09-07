#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    cin>> n>> a>> b;
    if (a > n || b > n) {
        cout<< 0;
        return 0;
    }
    int board[n][n];
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<n; j++) {
            cin>> board[i][j];
        }
    }
    int dp[n][n];
    dp[0][0] = board[0][0];
    for (int j = 1; j<n; j++) {
        dp[0][j] = dp[0][j-1] + board[0][j];
    }
    for (int i = 1; i<n; i++) {
        dp[i][0] = dp[i-1][0] + board[i][0];
    }
    for (int i = 1; i<n; i++) {
        for (int j = 1; j<n; j++) {
            dp[i][j] = max(dp[i-1][j], dp[i][j-1]) + board[i][j];
        }
    }
    cout<< dp[a-1][b-1];
    return 0;
}