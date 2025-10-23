#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

const int INF = 1e9+7;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;

    vector<int> a(n+1);
    for (int i=1; i<=n; i++) cin>> a[i];

    vector<int> dp(n+1, INF);
    dp[1] = 0;
    for (int i=2; i<=n; i++) {
        for (int j=1; j<=2; j++) {
            if (i-j >= 1) dp[i] = min(dp[i], dp[i-j] + abs(a[i] - a[i-j]));
        }
    }
    cout<< dp[n];
}