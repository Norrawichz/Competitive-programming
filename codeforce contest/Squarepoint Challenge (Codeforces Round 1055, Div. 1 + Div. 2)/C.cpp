#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>>t;
    while (t--) {
        int n,q;
        cin>> n>> q;

        int a[n], pf0[n]={}, pf1[n]={}, check[n]={};
        for (int i=0; i<n; i++) cin>> a[i];
        for (int i=0; i<n; i++) {
            if (a[i] == 1) pf1[i]=1;
            else pf0[i]=1;
            if (i>0) {
                pf1[i]+=pf1[i-1];
                pf0[i]+=pf0[i-1];
            }
        }
        for (int i=1; i<n; i++) {
            if (a[i]==a[i-1]) check[i]+=1;
            check[i]+=check[i-1];
        }
        while (q--) {
            int l,r;
            cin>> l>> r;
            l--;
            r--;
            int c0=pf0[r]-(l-1 >= 0? pf0[l-1] : 0), c1=pf1[r]-(l-1 >= 0? pf1[l-1] : 0);
            if (c0 % 3 != 0 || c1 % 3 != 0) {
                cout<< -1<< "\n";
                continue;
            }
            bool ok=check[r]-check[l];

            if (ok==0) cout<< (c0+c1)/3 + 1<< "\n";
            else cout<< (c0+c1)/3<< "\n";
        }
    }
}