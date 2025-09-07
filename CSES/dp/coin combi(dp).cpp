#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x;
    cin>> n>> x;

    int arr[n];
    for (int i=0; i<n; i++) cin>> arr[i];
    
    int dp[x+1] = {};
    dp[0] = 1;
    int mod = 1000000007;
    for (int i=1; i<=x; i++) {
        for (auto x : arr) {
            if (i-x >= 0) {
                dp[i] = (dp[i] + dp[i-x]) % mod;
            }
        }
    }
    cout<< dp[x];
}