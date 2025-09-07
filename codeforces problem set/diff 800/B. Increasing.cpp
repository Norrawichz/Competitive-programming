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
        bool valid = 1;
        for (int i=0; i<n-1; i++) {
            if (a[i] == a[i+1]) {
                valid = 0;
                break;
            }
        }
        if (valid) cout<< "YES\n";
        else cout<< "NO\n";
    }
}