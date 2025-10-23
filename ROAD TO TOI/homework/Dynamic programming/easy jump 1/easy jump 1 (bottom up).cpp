#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int pos;
    cin>> pos;

    int step[] = {3, 5};
    vector<bool> dp(pos+1, 0);
    dp[0]=1;

    for (int i=1; i<=pos; i++) {
        for (int j=0; j<2; j++) {
            if (i-step[j] >= 0) dp[i] = dp[i] || dp[i-step[j]];
        }
    }
    cout<< (dp[pos] ? "yes" : "no");
}