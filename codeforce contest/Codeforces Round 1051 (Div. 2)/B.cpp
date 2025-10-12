#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        ll n,k;
        cin>> n>> k;

        ll a[n], b[k];
        for (int i=0; i<n; i++) cin>> a[i];
        for (int i=0; i<k; i++) cin>> b[i];

        sort(a,a+n);
        sort(b,b+k);
        ll sm=0;
        for (int i=0; i<n; i++) sm+=a[i];

        ll id=n;
        for (int i=0; i<k; i++) {
            id-=b[i];
            if (id >=0) sm-=a[id];
        }
        cout<< sm<< "\n";
    }
}