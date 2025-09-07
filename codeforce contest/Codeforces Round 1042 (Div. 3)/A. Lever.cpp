#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;
        int a[n],b[n];
        for (int i=0; i<n; i++) cin>> a[i];
        for (int i=0; i<n; i++) cin>> b[i];
        
        int ans=1;
        for (int i=0; i<n; i++) {
            if (a[i] > b[i]) ans+=a[i]-b[i];
        }
        cout<< ans<<endl;
    }
}