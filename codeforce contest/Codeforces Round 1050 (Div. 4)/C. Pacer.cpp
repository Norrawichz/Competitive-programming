#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n,m;
        cin>> n>> m;
        int a[n+1], b[n+1];
        a[0] = 0;
        b[0] = 0;

        int ans=0;
        for (int i=1; i<=n; i++) cin>> a[i]>> b[i];

        for (int i=0; i<n; i++) {
            if ((a[i+1] - a[i]) % 2 == !(b[i+1] == b[i])) ans+=a[i+1]-a[i];
            else ans+=a[i+1]-a[i]-1;
        }
        
        cout<< ans+(m-a[n])<<endl;
    }
}