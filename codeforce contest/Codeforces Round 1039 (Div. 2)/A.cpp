#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n,c;
        cin>> n>> c;
        int a[n];
        for (int i=0; i<n; i++) cin>> a[i];
        sort(a, a+n);
        int ans=0, mul=1;
        for (int i=n-1; i>=0; i--) {
            if (a[i]*mul <= c) {
                mul*=2;
                ans++;
            }
        }
        cout<< n-ans<<endl;
    }
}