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
        int l=0, r=n-1;
        while (l <= r) {
            if (l == r) cout<< a[l];
            else cout<< a[l]<< " "<< a[r]<< " ";
            l++;
            r--;
        }
        cout<< "\n";
    }
}