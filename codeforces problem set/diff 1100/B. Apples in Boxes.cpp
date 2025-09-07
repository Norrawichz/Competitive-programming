#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n,k;
        cin>> n>> k;
        int a[n], sm=0;
        for (int i=0; i<n; i++) {
            cin>> a[i];
            sm += a[i];
        }
        sort(a, a+n);
        a[n-1]--;
        sort(a, a+n);
        
        if (sm%2==0 || a[n-1] - a[0] > k) cout<< "Jerry\n";
        else cout<< "Tom\n";
    }
}