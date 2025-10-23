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

        int mx[n], cmx=0;
        for (int i=0; i<n; i++) {
            if (a[i] > cmx) cmx=a[i];
            mx[i]=cmx;
        }

        for (int i=1; i<n; i+=2) {
            a[i]=mx[i];
        }

        int ans=0;
        for (int i=1; i<n; i+=2) {
            if (a[i] == a[i-1]) {
                ans++;
                a[i-1]--;
            }
            if (i+1 < n && a[i] <= a[i+1]) {
                ans+=a[i+1]-a[i]+1;
                a[i+1]=a[i]-1;
            }
        }
        cout<< ans<<'\n';
    }
}