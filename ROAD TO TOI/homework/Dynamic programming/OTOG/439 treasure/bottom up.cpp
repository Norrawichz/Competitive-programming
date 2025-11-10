#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;

    vector<int> a(n);
    for (int i=0; i<n; i++) cin>> a[i];

    vector<int> dp(n, INT_MAX);
    dp[0] = 0;
    for (int i=0; i<n; i++) {
        if (dp[i] != INT_MAX && i+1 < n) {
            dp[i+1] = min(dp[i+1], dp[i]+1);
            
        }
        if (dp[i] != INT_MAX && i+a[i] < n) {
            dp[i+a[i]] = min(dp[i+a[i]], dp[i]+1);
        }
    }
    cout<< dp[n-1];
}