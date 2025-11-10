#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;

        vector<int> a(n);
        for (int i=0; i<n; i++) cin>> a[i];

        int a1 = a[0]%2, a2 = a[1]%2;
        bool ok = 1;
        for (int i=0; i<n; i+=2) {
            if (a[i]%2 != a1) {
                ok=0;
                break;
            }
        }
        for (int i=1; i<n; i+=2) {
            if (a[i]%2 != a2) {
                ok=0;
                break;
            }
        }

        if (ok) cout<< "YES\n";
        else cout<< "NO\n";
    }
}