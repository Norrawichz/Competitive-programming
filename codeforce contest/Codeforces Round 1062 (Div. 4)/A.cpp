#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int a[4];
        for (int i=0; i<4; i++) cin>> a[i];

        int prev=a[0];
        bool ok=1;
        for (int i=1; i<4; i++) {
            if (a[i] != a[0]) {
                ok=0;
                break;
            }
        }
        if (ok) cout<< "YES\n";
        else cout<< "NO\n";
    }
}