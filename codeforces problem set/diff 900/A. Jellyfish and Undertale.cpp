#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;

    while (t--) {
        int c,b,n;
        cin>> c>> b>> n;

        int a[n];
        for (int i=0; i<n; i++) cin>> a[i];

        sort(a,a+n);

        int ans=0;
        for (int i=0; i<n; i++) {
            ans += b-1;
            b = min(1+a[i],c);
        }
        ans += b;
        cout<< ans<< '\n';
    }
}