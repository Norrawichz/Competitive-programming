#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    cin>> n>> m;
    int a[n];
    for (int i=0; i<n; i++) cin>> a[i];
    sort(a,a+n);
    
    int ans = 0;
    for (int i=0; i<m; i++) ans += (a[i]<0 ? abs(a[i]):0);
    cout<< ans;
}