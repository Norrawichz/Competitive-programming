#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x;
    cin>> n>> x;

    int coin[n];
    for (int i=0; i<n; i++) cin>> coin[i];

    int dp[x+1] = {};
    dp[0] = 1;
    for (int i=1; i<=x; i++) {
        for (auto c : coin) {
            if (i-c >= 0) {
                dp[i] += dp[i-c];
            }
        }
    }
    cout<< dp[x];
}