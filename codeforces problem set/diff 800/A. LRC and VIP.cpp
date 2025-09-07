#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;
        int a[n], mx=0, ys=1;
        for (int i=0; i<n; i++) {
            cin>> a[i];
            mx = max(mx, a[i]);
            if (a[0] != a[i]) ys=0;
        }
        if (ys) {
            cout<< "NO"<<endl;
            continue;
        }  
        cout<< "YES"<<endl;
        for (int i=0; i<n; i++) {
            if (mx == a[i]) cout<< 1<< " ";
            else cout<< 2<<" ";
        }
        cout<< endl;
    }
}