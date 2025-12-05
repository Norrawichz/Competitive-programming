#include <bits/stdc++.h>
using namespace std;

int n;
const int INF = 1e9+7;

int main() {
    cin.tie(0)->sync_with_stdio(0);
  
    cin>> n;

    vector<vector<int>> a(n, vector<int>(n));
    for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin>> a[i][j];

    vector<int> dp((1<<n), INF);
    dp[0] = 0;

    for (int i=1; i<(1<<n); i++) {
        for (int j=0; j<n; j++) {
            if (i & (1<<j)) {
                int cnt=__builtin_popcount(i);
                dp[i] = min(dp[i], dp[i & ~(1<<j)] + a[cnt-1][j]);
            }
        }
    }

    cout<< dp[(1<<n)-1];
}