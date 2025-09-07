#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;
    int a[n], ans=0, mn=INT_MAX, mx=-1;
    if (n==1) {
        cout<< 0;
        return 0;
    }
    for (int i=0; i<n; i++) cin>> a[i];
    for (int i=0; i<n; i++) {
        if (i==0) mx=mn=a[0];
        if (a[i] > mx) {
            ans++;
            mx=a[i];
        }
        if (a[i] < mn) {
            ans++;
            mn=a[i];
        }
    }
    cout<< ans;
}