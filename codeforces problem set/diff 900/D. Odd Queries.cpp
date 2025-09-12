#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n,q;
        cin>> n>> q;

        long long a[n];
        for (int i=0; i<n; i++) cin>> a[i];
        for (int i=1; i<n; i++) a[i] += a[i-1];

        for (int i=0; i<q; i++) {
            long long l,r,k;
            cin>> l>> r>> k;
            if ((a[n-1] - (a[r-1]-(l-2 >= 0 ?a[l-2]:0)) + k*(r-l+1)) % 2 == 1) cout<< "YES\n";
            else cout<< "NO\n";
        }
    }
}