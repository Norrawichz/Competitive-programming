#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;
        int a[n];
        for (int i=0; i<n; i++) cin>> a[i];
        sort(a, a+n);
        if ((a[n-1] + a[0]) % 2 == 0) {
            cout<< 0<<endl;
            continue;
        }
        int l=n, r=n;
        for (int i=1; i<n; i++) {
            if (a[i] % 2 != a[0]%2) {
                l=i;
                break;
            }
        }
        for (int i=1; i<n; i++) {
            if (a[n-i-1] % 2 != a[n-1]%2) {
                r=i;
                break;
            }
        }
        cout<< min(l, r)<< endl;
    }
}
