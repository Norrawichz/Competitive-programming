#include <bits/stdc++.h>
using namespace std;

int n, a[100000], dp[100000]={}, ans = 1;

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    cin>> n;
    for (int i=0; i<n; i++) cin>> a[i];
    dp[0] = 1;
    for (int i=1; i<n; i++) {
        if (a[i] > a[i - 1]) {
            dp[i] += dp[i-1]+1;
        }
        else {
            dp[i] = 1;
        }
        ans = max(ans, dp[i]);
    }
    cout<< ans;
}