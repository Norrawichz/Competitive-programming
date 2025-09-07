#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>> n;
    int board[n+1][n+1] = {};
    for (int i = 1; i<=n; i++) {
        for (int j = 1; j<=n; j++) {
            int n;
            cin>> n;
            board[i][j] = n;
        }
    }
    int dp[n+1][n+1] = {};
    int r1, c1, r2, c2;
    cin>> r1>> c1>> r2>> c2;
    for (int i = r1; i<= r2; i++) {
        for (int j = c1; j<= c2; j++) {
            dp[i][j] = dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1] + board[i][j];
        }
    }
    cout<< dp[r2][c2];
    return 0;
}