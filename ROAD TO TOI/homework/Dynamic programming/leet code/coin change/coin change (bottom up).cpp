#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9+7;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, amount;
    cin>> n>> amount;

    int c[n];
    for (int i=0; i<n; i++) cin>> c[i];

    vector<int> dp(amount+1, INF);
    dp[0]=0;
    for (int i=1; i<=amount; i++) {
        for (int j=0; j<n; j++) {
            if (i-c[j] >= 0) dp[i]=min(dp[i], dp[i-c[j]]+1);
        }
    }
    cout<< dp[amount];
}