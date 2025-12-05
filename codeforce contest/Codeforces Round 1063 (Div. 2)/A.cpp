#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;

        int a[n];
        for (int i=0; i<n; i++) cin>> a[i];

        sort(a, a+n);
        bool ok=1;
        for (int i=1; i<n-1; i+=2) {
            if (a[i] != a[i+1]) {
                ok=0;
                break;
            }
        }

        if (ok) cout<< "YES\n";
        else cout<< "NO\n";
    }
}