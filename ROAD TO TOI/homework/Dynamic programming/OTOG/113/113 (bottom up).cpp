#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;

    vector<int> a(n);
    for (int i=0; i<n; i++) cin>> a[i];

    vector<int> dp(n, 0);
    for (int i=2; i<n; i++) {
        dp[i] = max(dp[i-1], (i-3>=0? dp[i-3] : 0) + a[i]);
    }
    cout<< dp[n-1];
}