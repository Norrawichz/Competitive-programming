#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,q;
    cin>> n>> q;
    int a[n];
    for (int i=0; i<n; i++) cin>> a[i];
    sort(a,a+n);
    for (int i=1; i<n; i++) {
        a[i] += a[i-1];
    }

    for (int i=0; i<q; i++) {
        int c;
        cin>> c;
        int l=0, r=n-1;
        while (l <= r) {
            int mid= (l+r)/2;
            if (a[mid] > c) r=mid-1;
            else l=mid+1;
        }
        cout<< l<< "\n";
    }
}