#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int we,n;
    cin>> we>>n;

    int w[n], v[n];
    for (int i=0; i<n; i++) cin>> w[i];
    for (int i=0; i<n; i++) cin>> v[i];

    int dp[we+1]={};
    for (int i=0; i<n; i++) {
        for (int j=we; j>=w[i]; j--) {
            dp[j]=max(dp[j], dp[j-w[i]]+v[i]);
        }
    }
    cout<< dp[we];
}