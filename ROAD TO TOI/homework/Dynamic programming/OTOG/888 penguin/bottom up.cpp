#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9+7;

int countWays (int N, int M, vector<int> a){
    vector<int> dp(N+1, 0);
    dp[0] = 1;

    for (int i=1; i<=N; i++) {
        for (auto x : a) {
            if (i - x >= 0) dp[i] = (dp[i] + dp[i-x])%INF;
        }
    }
    return dp[N];
}