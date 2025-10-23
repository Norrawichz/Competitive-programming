#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;

    int dp[n+1];
    dp[0]=0;
    dp[1]=1;
    for (int i=2; i<=n; i++) {
        dp[i]=dp[i-1]+dp[i-2];
    }
    cout<< dp[n];
}