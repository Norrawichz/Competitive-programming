#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int t;
    cin>> t;
    while (t--) {
        int n, mn = 20, ans=1;
        cin>> n;
        int a[n];
        for (int i=0; i<n; i++) {
            cin>> a[i];
            mn = min(mn, a[i]);
        }
        bool y=1;
        for (int i=0; i<n; i++) {
            if (a[i] == mn && y) {
                ans *= (a[i]+1);
                y=0;
            }
            else ans *= a[i];
        }
        cout<< ans<< endl;
    }
}