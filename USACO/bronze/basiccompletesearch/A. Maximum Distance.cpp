#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;
    int mx=0, x[n], y[n];
    for (int i=0; i<n; i++) cin>> x[i];
    for (int i=0; i<n; i++) cin>> y[i];
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (i==j) continue;
            int dist = (x[i]-x[j]) * (x[i]-x[j]) + (y[i]-y[j]) * (y[i]-y[j]);
            mx = max(mx, dist);
        }
    }
    cout<< mx;
}