#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;

        int a[n], mn=INT_MAX;
        for (int i=0; i<n; i++) cin>> a[i];

        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                mn = mn & a[j];
            }
        }
        cout<< mn<<'\n';
    }
}