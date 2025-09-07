#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>> t;
    while (t--) {
        ll n, x1, y1, x2, y2, s = 0, mx = 0;
        cin>> n>> x1>> y1>> x2>> y2;
        vector<ll> a(n);
        for (int i=0; i<n; i++) {
            cin>> a[i];
            s+=a[i];
            mx = max(mx, a[i]);
        }
        ll d = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
        ll mn = 0;
        if (mx * 2 >= s) mn = (s - 2 * mx) * (s - 2 * mx);
        if (mn <= d && d <= s * s) cout << "YES\n";
        else cout << "NO\n";
    }
}