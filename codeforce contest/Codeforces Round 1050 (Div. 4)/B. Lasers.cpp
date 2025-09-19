#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n,m,x,y;
        cin>> n>> m>> x>> y;

        int a[n],b[m];
        for (int i=0; i<n; i++) cin>> a[i];
        for (int i=0; i<m; i++) cin>> b[i];
        cout<< n+m<<endl;
    }
}