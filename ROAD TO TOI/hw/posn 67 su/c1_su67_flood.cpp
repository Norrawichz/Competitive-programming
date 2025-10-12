#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;

    int a[n],p[n];
    for (int i=0; i<n; i++) cin>> a[i];

    for (int i=0; i<n; i++) {
        int mx=0;
        for (int j=i+1; j<n; j++) {
            if (a[j] >= mx) {
                mx = a[j];
                p[i]=j;
            }
            if (a[j] >= a[i]) {
                break;
            }
        }
    }
    int ans=0;
    for (int i=0; i<n-2; i++) {
        for (int j=i+1; j< p[i]; j++) {
            ans+= min(a[p[i]], a[i])-a[j];
        }
        i=p[i]-1;
    }
   

    cout<< ans;
}
