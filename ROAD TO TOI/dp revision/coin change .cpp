#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[]={1,2,5}, n;
    cin>> n;

    int dp[n+1]={};
    dp[0]=1;
    for (auto x : a) {
        for (int i=1; i<=n; i++) {
            if (i-x>=0) dp[i]+=dp[i-x];
        }
    }
    cout<< dp[n];
}