#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;

    int a[n], b[n];
    for (int i=0; i<n; i++) cin>> a[i];
    for (int i=0; i<n; i++) cin>> b[i];

    sort(a,a+n);
    sort(b,b+n);

    int sm=0;
    for (int i=0; i<n; i++) sm+=abs(a[i]-b[i]);
    cout<< sm;
}   