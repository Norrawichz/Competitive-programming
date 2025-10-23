#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    string s;
    cin>> n>> s;

    int st[]={3,5};
    vector<char> c(n+1);
    c[0] = '.';

    for (int i=1; i<=n; i++) c[i] = s[i-1];

    vector<int> dp(n+1, 0);
    dp[0]=1;

    for (int i=1; i<=n; i++) {
        for (int j=0; j<2; j++) {
            if (i - st[j] >= 0 && c[i] != '#') dp[i] += dp[i-st[j]];
        }
    }
    cout<< dp[n];
}