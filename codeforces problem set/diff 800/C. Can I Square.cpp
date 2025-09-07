#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;
        ll sm=0;
        for (int i=0; i<n; i++) {
            int a;
            cin>> a;
            sm+=a;
        }
        ll l=1, r=1e9;
        bool f=0;
        while (l <= r) {
            ll mid = (l+r)/2;
            if (mid * mid == sm) {
                f=1;
                break;
            }
            else if (mid * mid > sm) r=mid-1;
            else if (mid * mid < sm) l=mid+1;
        }
        if (f) cout<< "YES\n";
        else cout<< "NO\n";
    }
}