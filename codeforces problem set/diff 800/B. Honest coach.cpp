#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;
        int a[n];
        for (int i=0; i<n; i++) {
            cin>> a[i];
        }
        sort(a, a+n);
        int mn = INT_MAX;
        for (int i=0; i<n-1; i++) {
            mn = min(mn , a[i+1]-a[i]);
        }
        cout<< mn<< endl;
    }
}