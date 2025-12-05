#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,l,r;
    cin>> n>> l>> r;

    vector<int> dp(n+1, 0);
    for (int i=0; i<l+r; i++) dp[i] = 1;

    for (int i=l+r; i<=n; i++) {
        dp[i] = dp[i*l/(l+r)] + dp[i*r/(l+r)];
    }
    cout<< dp[n];
}