#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;

    vector<int> dp(n+1, 0);
    dp[0] = 1;

    int step[] = {1, 2};
    for (int i=1; i<=n; i++) {
        for (int j=0; j<2; j++) {
            if (i-step[j] >= 0) dp[i] += dp[i-step[j]];
        }
    }
    cout<< dp[n];
}