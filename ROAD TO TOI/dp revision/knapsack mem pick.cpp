#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int we, n;
    cin>> we>> n;

    int w[n], v[n];
    for (int i=0; i<n; i++) cin>> w[i];
    for (int i=0; i<n; i++) cin>> v[i];

    int dp[we+1]={};
    bool pick[we+1][n]={};

    for (int i=0; i<n; i++) {
        for (int j=we; j>= w[i]; j--) {
            if (dp[j-w[i]]+v[i] > dp[j]) {
                dp[j]=dp[j-w[i]]+v[i];
                pick[j][i]=1;
            }
        }
    }
    cout<< dp[we]<< "\n";
    int j=we;
    for (int i=n-1; i>=0; i--) {
        if (j > 0 && pick[we][i]) {
            cout<< w[i]<< " ";
            j-=v[i];
        }
    }
}