#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n,m,k;
        cin>> n>> m>> k;

        int a[n], b[m];
        for (int i=0; i<n; i++) cin>> a[i];
        for (int i=0; i<m; i++) cin>> b[i];

        int ans=0;
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                if (a[i] + b[j] <= k) ans++;
            }
        }
        cout<< ans<< endl;
    }
}