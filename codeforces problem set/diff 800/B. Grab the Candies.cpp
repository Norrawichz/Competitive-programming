#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n, even=0, odd=0;
        cin>> n;
        for (int i=0; i<n; i++) {
            int a;
            cin>> a;
            if (a%2==0) even+=a;
            else odd+=a;
        }
        if (even > odd) cout<< "YES\n";
        else cout<< "NO\n";
    }
}