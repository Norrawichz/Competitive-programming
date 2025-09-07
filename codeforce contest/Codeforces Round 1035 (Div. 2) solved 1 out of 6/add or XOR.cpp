#include <bits/stdc++.h>
using namespace std;

int findxor(int tar) {

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>> t;
    while (t--) {
        int a,b,x,y;
        cin>> a>> b>> x>> y;
        if (a==b) {
            cout<< 0<< endl;
            continue;
        }
        int dp[b+1] = {};
        if (a > b && (a^1)<=b) {
            a = (a^1);
            if (a==b) {
                cout<< y<< endl;
                continue;
            }
            dp[a] += y;
        }
        for (int i=a+1; i<=b; i++) {
            if ((i^1) >= a && (i^1) < i) {
                dp[i] = min(dp[i-1] + x, dp[i^1] + y);
            }
            else {
                dp[i] = dp[i-1] + x;
            }
        }
        cout<< (dp[b] == 0 ? -1 : dp[b])<< endl;
    }
}