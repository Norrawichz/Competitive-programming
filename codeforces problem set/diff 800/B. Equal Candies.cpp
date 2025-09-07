#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;
        int mn=INT_MAX;
        int a[n];
        for (int i=0; i<n; i++) {
            cin>> a[i];
            mn=min(a[i],mn);
        }
        int ans=0;
        for (int i=0; i<n; i++) ans += a[i]-mn;
        cout<< ans<<endl;
    }
}