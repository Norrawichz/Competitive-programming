#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n,k;
        cin>> n>> k;
        bool valid = 1;
        int a[n];
        for (int i=0; i<n; i++) cin>> a[i];
        for (int i=1; i<n; i++) if (a[i] < a[i-1]) {valid=0; break;}
        if (k > 1 || valid) cout<< "YES\n";
        else cout<<"NO\n";
    }
}