#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string a,b;
    cin>> a>> b;

    vector<vector<bool>> dp(a.size()+1, vector<bool>(b.size()+1, false));
    dp[0][0] = true;

    for (int i=1; i<=b.size(); i++) {
        if (b[i-1] == '*') dp[0][i] = dp[0][i-1];
    }
    for (int i=1; i<=a.size(); i++) {
        for (int j=1; j<=b.size(); j++) {
            if (b[j-1] == '*') dp[i][j] = dp[i][j-1] || dp[i-1][j-1] || dp[i-1][j];
            else if (b[j-1] == '?' || a[i-1] == b[j-1]) dp[i][j] = dp[i-1][j-1];
        }
    }
    cout<< dp[a.size()][b.size()];
}