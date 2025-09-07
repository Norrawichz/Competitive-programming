#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    cin>> n>> m;
    int a[m];
    for (int i=0; i<m; i++) cin>> a[i];
    sort(a, a+m);
    int mn=INT_MAX;
    for (int i=0; i<=m-n; i++) {
        mn = min(mn, a[i+n-1] - a[i]);
    }
    cout<< mn;
}