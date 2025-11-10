#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int W, n;
    cin>> W>> n;

    vector<int> v(n), w(n);
    for (int i=0; i<n; i++) cin>> v[i];
    for (int i=0; i<n; i++) cin>> w[i];
    
    vector<int> dp(W+1, 0);
    for (int i=0; i<n; i++) {
        for (int j=W; j>=1; j--) {
            if (j - w[i] >= 0) dp[j] = max(dp[j], v[i]+dp[j-w[i]]);
        }
    }
    cout<< dp[W];
}