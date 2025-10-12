#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string s,l;
    cin>> s>> l;

    int n=s.size(), m=l.size();
    int dp[n+1][m+1]={};

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=m; j++) {
            if (s[i-1] != l[j-1]) dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
            else dp[i][j]=dp[i-1][j-1]+1;
        }
    }
    cout<< dp[n][m]<<"\n";


    int i=n,j=m;
    string ans="";
    while (i>0 && j>0) {
        if (s[i-1] == l[j-1]) {
            ans=s[i-1]+ans;
            i--;
            j--;
        }
        else {
            if (dp[i-1][j] >= dp[i][j-1]) {
                i--;
            }
            else {
                j--;
            }
        }
    }
    cout<< ans;
}