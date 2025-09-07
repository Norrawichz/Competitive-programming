#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int t;
    cin>> t;
    while (t--) {
        int n,sum=0;
        cin>> n;
        int a[n];
        for (int i=0; i<n; i++) {
            cin>> a[i];
            sum+=a[i];
        }
        if (sum %2 != 0) {
            cout<< "NO"<< endl;
            continue;
        }
        bool dp[sum/2+1]={};
        dp[0] = 1;
        for (auto x : a) {
            for (int i=sum/2; i>=x; i--) {
                if (dp[i-x]) {
                    dp[i] = 1;
                }
            }
        }
        if (dp[sum/2]) cout<< "YES "<< endl;
        else cout<< "NO"<< endl;
    }
}