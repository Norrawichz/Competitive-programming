#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n,q;
        cin>> n>> q;

        int a[n];
        int lg[n];
        for (int i=0; i<n; i++) {
            cin>> a[i];
            lg[i]=log2(a[i]);
        }
        int pfx[n]={};
        for (int i=0; i<n; i++) {
            if (i-1 >=0) {
                pfx[i]+=pfx[i-1];
            }
            pfx[i]+=lg[i];
        }

        while (q--) {
            int l,r;
            cin>> l>> r;
            r--;
            l--;
            cout<< pfx[r]-(l-1>=0? pfx[l-1]:0)<<"\n";

        }
    }
}