#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;

        int d=0;
        for (int i=0; i<32; i++) if (n & (1<<i)) d=i;
        bool oks=0;
        for (int i=0; i<=(1<<(d)); i++) {
            int k=d/2;
            bool ok=1;
            for (int j=0; j<=d; j++) {
                if (((i & (1<<j)) ^ (i & (1<<(d-j)))) != n & (1<<i)) {
                    ok=0;
                    break;
                }
            }
            if (ok) {
                oks=1;
                cout<< "YES\n";
                break;
            }
        }
        if (!oks) cout<< "NO\n";

    }
}