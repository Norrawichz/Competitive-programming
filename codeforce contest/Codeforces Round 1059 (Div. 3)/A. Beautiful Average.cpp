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

        int mx=0;
        for (int i=0; i<n; i++) mx=max(mx, a[i]);
        cout<< mx<< "\n";
    }
}