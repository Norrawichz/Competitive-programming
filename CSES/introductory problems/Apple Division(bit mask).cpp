#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;

    ll a[n], t=0;
    for (int i=0; i<n; i++) {
        cin>> a[i];
        t+=a[i];
    }

    ll ans = LONG_LONG_MAX;
    for (int mask=0; mask<(1<<n); mask++) {
        ll sm=0;
        for (int i=0; i<n; i++) {
            if (mask & (1<<i)) sm+=a[i];
        }
        ans=min(ans, abs(t-2*sm));
    }
    cout<< ans;

}