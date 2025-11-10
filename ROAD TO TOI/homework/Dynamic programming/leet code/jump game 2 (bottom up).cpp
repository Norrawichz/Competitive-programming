#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9+7;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;

    vector<int> nums(n);
    for (int i=0; i<n; i++) cin>> nums[i];
    vector<int> dp(n,INF);
    dp[0]=0;
    for (int i=0; i<n; i++) {
        for (int j=1; j<=nums[i]; j++) {
            if (i+j >= n) break;
            dp[i+j] = min(dp[i+j],dp[i]+1);
        }
    }
    cout<< dp[n-1];
}