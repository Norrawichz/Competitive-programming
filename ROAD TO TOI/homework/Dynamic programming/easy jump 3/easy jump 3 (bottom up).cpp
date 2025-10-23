#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9+7;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;

    int step[] = {3,5};
    vector<int> dp(n+1, INF);
    dp[0] = 0;

    for (int i=1; i<=n; i++) {
        for (int j=0; j<2; j++) {
            if (i-step[j] >= 0) dp[i] = min(dp[i], dp[i-step[j]]+1);
        }
    }
    int ans = dp[n];
    cout<< (ans >= INF ? -1 : ans);
}