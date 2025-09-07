#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x;
    cin>> n>> x;

    int w[n], v[n], mx = 0;
    for (int i=0; i<n; i++) cin>> w[i];
    for (int i=0; i<n; i++) cin>> v[i];

    int dp[x+1] = {};
    for (int j=0; j<n; j++) {
        for (int i=x; i>=w[j]; i--) {
            dp[i] = max(dp[i], dp[i-w[j]] + v[j]);
        }
    }
    cout<< dp[x];
}