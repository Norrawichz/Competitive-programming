#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n,k;
        cin>> n>> k;
        int a[n], b[n];
        for (int i=0; i<n; i++) cin>> a[i];
        for (int i=0; i<n; i++) cin>> b[i];
        sort(a, a+n);
        sort(b, b+n);
        for (int i=0; i<n && k >0; i++) {
            if (a[i] < b[n-i-1]) {
                k--;
                a[i]=b[n-i-1];
            }
        }
        cout<< accumulate(a, a+n, 0)<<endl;
    }
}