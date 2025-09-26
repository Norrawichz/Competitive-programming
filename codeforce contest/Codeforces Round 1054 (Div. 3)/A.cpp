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

        int m=0, z=0;
        for (int i=0; i<n; i++) {
            if (a[i] == -1) m++;
            else if (a[i] == 0) z++;
        }
        int ans=(m%2)*2+z;
        cout<< ans<<"\n";
    }
}