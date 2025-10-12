#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;

    int a[n];
    for (int i=0; i<n; i++) cin>> a[i];
    int sm[n];
    for (int i=0; i<n; i++) sm[i]=a[i]+(i-1>=0? sm[i-1]:0);

    int ch=INT_MIN, ci=-1, cj=-1;
    for (int i=0; i<n; i++) {
        for (int j=i; j<n; j++) {
            if (ch < (j-i+1)-2*(sm[j]-(i-1>=0? sm[i-1]:0))) {
                ch = (j-i+1)-2*(sm[j]-(i-1>=0? sm[i-1]:0));
                ci=i;
                cj=j;
            }
        }
    }
    for (int i=0; i<n; i++) {
        if (i >= ci && i <= cj) a[i] = (a[i]+1)%2;
    }
    int ans=0;
    for (int i=0; i<n; i++) ans += a[i];
    cout<< ans;
}