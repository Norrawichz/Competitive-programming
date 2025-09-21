#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n,k;
        cin>> n>> k;

        int a[n];
        for (int i=0; i<n; i++) cin>> a[i];

        int h=0, ans=0;
        for (int i=0; i<n; i++) {
            if (a[i] == 0 && h>0) {
                h--;
                ans++;
            }
            else if (a[i]>=k) h+=a[i];
        }
        cout<< ans<< "\n";
    }
}