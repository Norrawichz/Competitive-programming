#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;

    vector<int> a(n+1);
    for (int i=1; i<=n; i++) cin>> a[i];

    vector<int> dp(n+1, 0);
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            if (j - i >= 0) dp[j] = max(dp[j], dp[j-i]+a[i]);
        }
    }
    cout<< dp[n];
}