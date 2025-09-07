#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, l;
    cin>> n>> l;
    double a[n];
    for (int i=0; i<n; i++) cin>> a[i];
    sort(a, a+n);

    double mxl=max(a[0], l-a[n-1]);
    for (int i=0; i<n-1; i++) {
        mxl=max((a[i+1]-a[i])/2,mxl);
    }
    cout<<fixed<<setprecision(10)<< mxl;
}