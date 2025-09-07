#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    cin>> n;
    int a[n];
    for (int i=0; i<n; i++) cin>> a[i];

    cin>> m;
    int b[m];
    for (int i=0; i<m; i++) cin>> b[i];

    sort(a,a+n);
    sort(b,b+m);

    int ans=0,ap=0, bp=0;
    while (ap < n && bp < m) {
        if (abs(a[ap] - b[bp]) <= 1) {ans++;ap++;bp++;}
        else if (a[ap] < b[bp]) ap++;
        else if (b[bp] < a[ap]) bp++;
    }
    cout<< ans;
}