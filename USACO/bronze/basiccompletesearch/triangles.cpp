#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    freopen("triangles.in", "r", stdin);
    freopen("triangles.out", "w", stdout);
    int n;
    cin>> n;
    int x[n], y[n];
    for (int i=0; i<n; i++) cin>> x[i]>> y[i];

    int mx=0;
    for (int i=0; i<n; i++) {
        int dx=0, dy=0;
        for (int j=0; j<n; j++) {
            if (y[i]==y[j]) dx = max(dx, abs(x[i]-x[j]));
            if (x[i]==x[j]) dy = max(dy, abs(y[i]-y[j]));
        }
        mx = max(mx, dx*dy);
    }
    cout<< mx;
}