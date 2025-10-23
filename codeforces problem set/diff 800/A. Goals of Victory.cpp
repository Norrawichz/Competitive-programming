#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;

        int a[n-1];
        for (int i=0; i<n-1; i++) cin>> a[i];

        int ans=0;
        for (int i=0; i<n-1; i++) ans+=a[i];
        ans*=-1;
        cout<< ans<< "\n";

    }
}