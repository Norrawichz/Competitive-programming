#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, s[3];
    cin>> n>> s[0]>> s[1]>> s[2];
    vector<int> dp(n+1, -1);
    dp[0]=0;
    for (int i=1; i<=n; i++) {
        for (auto x : s) {
            if (i-x>=0 && dp[i-x] != -1) dp[i] = max(dp[i],dp[i-x]+1);
        }
    }
    cout<< dp[n];
}