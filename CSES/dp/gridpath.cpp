#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>> n;
    vector<vector<bool>> trap(n, vector<bool>(n, false));
    for (int i=0; i<n; i++) for (int j=0; j<n; j++) {
        char x;
        cin>> x;
        if (x=='*') {
            trap[i][j] = true;
        }
    }
    if (trap[0][0]) {
        cout<< 0;
        return 0;
    }
    int mod = 1000000007;
    vector<vector<int>> dp(n, vector<int>(n, 0));
    dp[0][0] = 1;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (trap[i][j] || (i==0 && j==0)) continue;
            if (i-1>=0 && j-1>=0) {
                dp[i][j] = (dp[i-1][j]%mod + dp[i][j-1]%mod)%mod;
            }
            else if (i-1>=0) {
                dp[i][j] = dp[i-1][j]%mod;
            }
            else {
                dp[i][j] = dp[i][j-1]%mod;
            }
        }
    }
    cout<< dp[n-1][n-1];
}