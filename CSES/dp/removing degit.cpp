#include <bits/stdc++.h>
using namespace std;

vector<int> de(int num) {
    vector<int> ans;
    while (num > 0) {
        int d = num % 10;
        if (d != 0) ans.push_back(d);
        num /= 10;
    }
    return ans;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>> n;
    vector<int> dp(n+1, INT_MAX);
    dp[0] = 0;
    for (int i=1; i<=n; i++) {
        for (auto x : de(i)) {
            dp[i] = min(dp[i-x]+1, dp[i]);
        }
    }
    cout<< dp[n];
}