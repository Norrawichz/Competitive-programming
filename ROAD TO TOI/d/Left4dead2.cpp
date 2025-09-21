#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    cin.tie(0)->sync_with_stdio(0);
    ll n,m;
    cin>> n>> m;
    ll a[n];
    for (int i=0; i<n; i++) cin>> a[i];

    ll l=1, r=1e18;
    while (l <= r) {
        ll mid=l + (r-l)/2;
        ll sm=0;
        for (int i=0; i<n; i++) sm+=mid/a[i];

        if (sm >= m) r=mid-1;
        else l=mid+1;
    }
    cout<< l;
}
