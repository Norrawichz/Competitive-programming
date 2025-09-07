#include <bits/stdc++.h>
using namespace std;

int main() { 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x;
    cin>> n>> x;

    int arr[n];
    for (int i=0; i<n; i++) cin>> arr[i];

    int mod = 1000000007;
    int dp[x+1] = {};
    dp[0] = 1;
    for (auto c : arr) {
        for (int i=1; i<=x; i++) {
            if (i-c >= 0) {
                dp[i] = (dp[i] + dp[i-c]) % mod;
            }
        }
    }
    cout<< dp[x];
}