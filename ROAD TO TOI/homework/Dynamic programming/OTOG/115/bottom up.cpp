#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;

    vector<int> a(n);
    unordered_map<int,int> m;

    for (int i=0; i<n; i++) cin>> a[i];
    for (int i=0; i<n; i++) {
        int u;
        cin>> u;
        m[u] = i+1;
    }

    vector<vector<int>> dp(n+1, vector<int>(n+1, 0));
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            if (m[a[i-1]] <= j) dp[i][j] = max(dp[i][j], dp[i-1][m[a[i-1]]]+1);
            dp[i][j] = max(dp[i][j], dp[i-1][j]);
        }
    }

    cout<< dp[n][n];

}