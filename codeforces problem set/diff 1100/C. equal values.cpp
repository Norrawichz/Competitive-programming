#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;
        int a[n];
        for (int i=0; i<n; i++) cin>> a[i];
        int mn= LONG_LONG_MAX;
        bool t=1;
        for (int i=0; i<n; i++) {
            if (a[0] != a[i]) t=0;
            int cur = a[i]*i;
            while (a[i] == a[i+1]) {
                i++;
            }
            cur += a[i]*(n-i-1);
            mn  = min(mn, cur);
        }
        cout<< (t ? 0 : mn)<<endl;
    }
}