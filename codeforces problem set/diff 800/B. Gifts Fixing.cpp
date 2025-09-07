#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;

        int a[n],b[n];
        for (int i=0; i<n; i++) cin>> a[i];
        for (int i=0; i<n; i++) cin>> b[i];

        int mna=INT_MAX, mnb=INT_MAX;
        for (int i=0; i<n; i++) {
            mna=min(mna, a[i]);
            mnb=min(mnb, b[i]);
        }
        long long ans=0;
        for (int i=0; i<n; i++) {
            ans+= max(a[i]-mna,b[i]-mnb);
        }
        cout<< ans<<endl;
    }
}