#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;
        int a[n], s=0;
        for (int i=0; i<n; i++) cin>> a[i], s+= a[i];
        if (s == n) {
            cout<< "YES\n";
            continue;
        }
        bool t=1;
        for (int i=0; i<n-1; i++) {
            if (!a[i] && !a[i+1]) {
                cout<< "YES\n";
                t=0;
                break;
            }
        }
        if (t) cout<< "NO\n";
    }
}