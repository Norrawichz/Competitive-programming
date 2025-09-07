#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int t;
    cin>> t;
    while (t--) {
        int n,k;
        cin>> n>> k;
        bool s=0;
        for (int i=0; i<n; i++) {
            int a;
            cin>> a;
            if (a==k) s=1;
        }
        if (s) cout<< "YES\n";
        else cout<< "NO\n";
    }
}
