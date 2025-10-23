#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    cin>> n>> m;

    vector<vector<char>> a(n+1, vector<char> (m+1));
    for (int i=1; i<=n; i++) {
        string s;
        cin>> s;
        for (int j=1; j<=m; j++) a[i][j]=s[j-1];
    }

    vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
    if (a[1][1] == '#') {
        cout<< 0;
        return 0;
    }
    a[1][1]='#';
    dp[1][1] = 1;

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=m; j++) {
            if (a[i][j] == '#') continue;
            dp[i][j] = dp[i-1][j] + dp[i][j-1];
        }
    }
    cout<< dp[n][m];
    
}