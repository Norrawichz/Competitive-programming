#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,t;
    cin>> n>> t;
    int a[n];
    for (int i=0; i<n; i++) cin>> a[i];
    bool dp[n]={};
    dp[0]=1;
    
    for (int i=0; i<n; i++) {
        if (i+a[i]>=n) continue;
        dp[i+a[i]]=(dp[i] || dp[i+a[i]]);
    }
    t--;
    cout<< (dp[t] ? "YES":"NO");
}  