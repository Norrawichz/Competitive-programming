#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n,k,q;
        cin>> n>> k>> q;

        int a[n];
        for (int i=0; i<n; i++) cin>> a[i];

        int valid[n];
        for (int i=0; i<n; i++) {
            if (a[i] <= q) valid[i] = 1;
            else valid[i] = 0;
        }

        for (int i=1; i<n; i++) {
            if (valid[i]) valid[i] += valid[i-1];
        }

        int i=0, ans=0;
        while (i<n) {
            int cnt=0, sm=0, j=1;
            while (valid[i] && i<n) {
                cnt++;
                if (cnt >= k) {
                    sm+=j++;
                }
                i++;
            }
            ans += sm;
            i++;
        }
        cout<< ans<<'\n';
    }
}