#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int n,k;
    cin>> n>> k;
    int a[n];
    for (int i=0; i<n; i++) cin>> a[i];
    sort(a, a+n);
    int ans=0;
    for (int i=0; i<n; i+=3) {
        if (a[i+2] + k <= 5) ans++;
    }
    cout<< ans;
}