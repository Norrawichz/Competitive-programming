#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string a,b;
    cin>> a>> b;

    int n=a.size(), m=b.size();
    vector<vector<int>> dp(n+1, vector<int>(m+1, INT_MAX));
    dp[0][0] = 0;

    for (int i=0; i<=n; i++) {
        for (int j=0; j<=m; j++) {
            if (i>0 && j>0 && a[i-1] == b[j-1]) dp[i][j] = min(dp[i][j], dp[i-1][j-1]);
            else {
                if (i>0) dp[i][j] = min(dp[i][j], dp[i-1][j] + 1);
                if (j>0) dp[i][j] = min(dp[i][j], dp[i][j-1] + 1);
            }
        }
    }

    cout<< dp[n][m];
}