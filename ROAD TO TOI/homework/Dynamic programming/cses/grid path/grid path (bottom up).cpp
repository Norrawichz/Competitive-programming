#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9+7;

int main() {
    cin.tie()->sync_with_stdio(0);
    int n;
    cin>> n;

    vector<vector<char>> c(n, vector<char> (n));
    for (int i=0; i<n; i++) {
        string s;
        cin>> s;
        for (int j=0; j<n; j++) {
            c[i][j]=s[j];
        }
    }

    vector<vector<int>> dp(n, vector<int> (n, 0));
    if (c[0][0] == '*') {
        cout<< 0;
        return 0;
    }

    dp[0][0] = 1;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (c[i][j] == '*') dp[i][j] = 0;
            else {
                if (i-1 >= 0) dp[i][j] = (dp[i][j] + dp[i-1][j]) % MOD;
                if (j-1 >= 0) dp[i][j] = (dp[i][j] + dp[i][j-1]) % MOD;
            }
        }
    }
    cout<< dp[n-1][n-1];
}