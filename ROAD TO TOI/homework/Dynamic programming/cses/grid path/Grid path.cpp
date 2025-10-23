#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;

    int dp[n][n]={};
    dp[0][0]=1;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            dp[i][j]+=(i-1>=0? dp[i-1][j]:0) + (j-1>=0? dp[i][j-1]:0);
        }
    }
    cout<< dp[n-1][n-1];
}