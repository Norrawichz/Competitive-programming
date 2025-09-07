#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int t;
    cin>> t;
    while (t--) {
        int n, m;
        cin>> n>> m;
        if (m > n) {
            cout<< "NO\n";
            continue;
        }
        bool dp[n+1]={};
        dp[n] = 1;
        for (int i=n; i>=1; i--) {
            for (int j=1; j<=n; j++) {
                if (i - j == j*2) {
                    dp[j] = dp[j] || dp[i];
                    dp[j*2] = dp[j*2] || dp[i];
                }
            }
        }
        if (dp[m]) cout<< "YES\n";
        else cout<< "NO\n";
    }
}