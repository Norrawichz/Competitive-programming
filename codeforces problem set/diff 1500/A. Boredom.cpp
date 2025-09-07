#include <bits/stdc++.h>
using namespace std;
const int si = 1e5+5;
#define int long long

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;  
    int freq[si]={};
    int mx=-1;
    for (int i=0; i<n; i++) {
        int x;
        cin>> x;
        freq[x]++;
        mx=max(mx,x);
    }
    int dp[mx+1]={};
    dp[1] = freq[1];
    for (int i=2; i<=mx; i++) {
        dp[i] = max(dp[i-1], dp[i-2] + freq[i]*i);
    }
    cout<< dp[mx];
}