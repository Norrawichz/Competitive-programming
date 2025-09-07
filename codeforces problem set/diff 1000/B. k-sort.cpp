#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;
        ll a[n];
        for (int i=0; i<n; i++) cin>> a[i];
        ll pmx=0,mx=0, s=0;
        for (int i=0; i<n; i++) {
            pmx = max(pmx, a[i]);
            ll d = pmx - a[i];
            s += d;
            mx = max(mx, d);
        }
        cout<< mx+s<< endl;
    }
}
