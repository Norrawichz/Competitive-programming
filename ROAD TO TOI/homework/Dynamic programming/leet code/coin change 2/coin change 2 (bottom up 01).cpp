#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, amount;
    cin>> n>> amount;

    vector<int> coins(n);
    for (int i=0; i<n; i++) cin>> coins[i];

    vector<int> dp(amount+1, 0);
    dp[0] = 1;

    for (int i=0; i<n; i++) {
        for (int j=0; j<=amount; j++) {
            if (j-coins[i] >= 0) dp[j] += dp[j-coins[i]];
        }
    }
    cout<< dp[amount];
}