#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,q;
    cin>> n;
    int a[n];
    for (int i=0; i<n; i++) cin>> a[i];
    cin>> q;
    sort(a,a+n);

    for (int i=0; i<q; i++) {
        int m;
        cin>> m;
        int l=0,r=n-1, ans=-1;
        while (l<=r) {
            int mid=(l+r)/2;
            if (a[mid] <= m) {
                ans=mid;w
                l=mid+1;
            }
            else r=mid-1;
        }
        cout<< ans+1<< endl;
    }
}